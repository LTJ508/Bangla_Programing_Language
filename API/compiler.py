import subprocess

def runCompiler(task_type, **kwargs):
    if task_type == "compile":
        source_code = kwargs.get("source_code", "")
        
        # Save the source code to a temporary file
        with open("temp_source.bangla", "w", encoding="utf-8") as source_file:
            source_file.write(source_code)
        
        # Run the compiler executable with the temporary source file
        try:
            result = subprocess.run(
                ["BanglaProgramingLanguage\\bin\\Debug\\BanglaProgramingLanguage.exe", "temp_source.bangla"],
                capture_output=True,
                text=True,
                encoding='utf-8',  # Specify the encoding explicitly
                timeout=10  # Set the timeout to 5 seconds
            )
            output = result.stdout + result.stderr  # Combine stdout and stderr
        except subprocess.TimeoutExpired:
            output = "Error: The compilation process took too long and was terminated."
        except subprocess.CalledProcessError as e:
            output = e.stdout + e.stderr  # Combine stdout and stderr in case of error
        
        return output
    else:
        raise ValueError(f"Unknown task type: {task_type}")

