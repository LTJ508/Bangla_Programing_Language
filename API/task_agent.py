from Simulator.simulator import run_quantum_algorithm, optimize_problem

def run_quantum_task(task_type, **kwargs):
    if task_type == "circuit_simulation":
        num_qubits = kwargs.get("num_qubits", 3)
        gate_type = kwargs.get("gate_type", "H")
        num_iterations = kwargs.get("num_iterations", 1000)
        return run_quantum_algorithm(num_qubits, gate_type, num_iterations)
    elif task_type == "optimization":
        problem_size = kwargs.get("problem_size", 10)
        num_iterations = kwargs.get("num_iterations", 100)
        return optimize_problem(problem_size, num_iterations)
    else:
        raise ValueError(f"Unknown task type: {task_type}")