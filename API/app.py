from flask import Flask, request, jsonify, send_from_directory
from flask_cors import CORS
import os
import sys

# Adjust the path to point to the parent directory of 'API'
sys.path.append(os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))

# Import necessary functions from the Compiler module
from API.compiler import runCompiler

# Initialize the Flask application
app = Flask(__name__)
# Enable CORS for all routes
CORS(app)

@app.route('/compiler', methods=['POST'])
def compiler_task():
    # Get the JSON data from the request
    data = request.json
    if not data:
        # Return an error if no data is provided
        return jsonify({"status": "error", "message": "No input data provided"}), 400

    # Get the task type and parameters from the data
    task_type = data.get('task_type')
    params = data.get('params', {})

    if not task_type:
        # Return an error if no task type is specified
        return jsonify({"status": "error", "message": "No task type specified"}), 400

    try:
        # Run the quantum task based on the task type and parameters
        result = runCompiler(task_type, **params)
        # Return the result of the quantum task
        return jsonify({"status": "success", "result": result})
    except ValueError as e:
        # Return an error if an invalid task type is specified
        return jsonify({"status": "error", "message": str(e)}), 400
    except Exception as e:
        # Log and return an internal server error for any other exceptions
        app.logger.error(f"An error occurred: {str(e)}")
        return jsonify({"status": "error", "message": "An internal server error occurred"}), 500

@app.route('/')
def serve_interface():
    # Serve the quantum interface HTML file
    return send_from_directory('', 'API_interface.html')

if __name__ == '__main__':
    # Run the Flask application in debug mode
    app.run(debug=True)