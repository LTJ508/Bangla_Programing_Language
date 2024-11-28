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
                ["BanglaProgramingLanguage\\BanglaProgramingLanguage.exe", "temp_source.bangla"],
                capture_output=True,
                text=True,
                check=True,
                encoding='utf-8'  # Specify the encoding explicitly
            )
            output = result.stdout
        except subprocess.CalledProcessError as e:
            output = e.stderr
        
        return output
    else:
        raise ValueError(f"Unknown task type: {task_type}")

