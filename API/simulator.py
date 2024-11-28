import random
from .QuantumCircuit import QuantumCircuit
from .UnitaryGates import *

def run_quantum_algorithm(num_qubits, gate_type, num_iterations):
    circuit = QuantumCircuit(num_qubits)
    
    # Apply Gates
    if gate_type == "H":
        gate = h_gate()
    elif gate_type == "X":
        gate = x_gate()
    elif gate_type == "Y":
        gate = y_gate()
    elif gate_type == "Z":
        gate = z_gate()
    else:
        raise ValueError(f"Unknown gate type: {gate_type}")
    
    for qubit in range(num_qubits):
        circuit.apply_gate(gate, qubit)
    
    # Perform measurements
    results = [circuit.measure() for _ in range(num_iterations)]
    
    # Count occurrences of each outcome
    counts = {i: results.count(i) for i in set(results)}
    
    return counts

def optimize_problem(problem_size, num_iterations):
    # This is a simplified optimization that just returns random "optimal" values
    return [random.randint(0, 1) for _ in range(problem_size)]