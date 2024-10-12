import numpy as np

def eigen(matrix):
    # Check if matrix is square
    if len(matrix) != len(matrix[0]):
        return "Error: Matrix must be square"
    
    # Check if matrix is 3x3
    if len(matrix) != 3:
        return "Error: Matrix must be 3x3"
    
    # Calculate the characteristic polynomial
    a = -1
    b = matrix[0][0] + matrix[1][1] + matrix[2][2]
    c = matrix[0][1]*matrix[1][0] + matrix[0][2]*matrix[2][0] + matrix[1][2]*matrix[2][1] - matrix[0][0]*matrix[1][1] - matrix[0][0]*matrix[2][2] - matrix[1][1]*matrix[2][2]
    d = -np.linalg.det(matrix)
    
    # Find the roots of the characteristic polynomial
    eigenvalues = np.roots([a, b, c, d])
    
    # Find the eigenvectors
    eigenvectors = []
    for val in eigenvalues:
        # Create the matrix A - val*I
        temp_matrix = [[matrix[i][j] - (val if i == j else 0) for j in range(3)] for i in range(3)]
        
        # Find the null space of the matrix A - val*I
        null_space = np.linalg.null_space(temp_matrix)
        
        # Normalize the eigenvector
        norm = np.linalg.norm(null_space)
        eigenvector = null_space / norm
        
        eigenvectors.append(eigenvector)
    
    return eigenvalues, eigenvectors

# Example usage
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
eigenvalues, eigenvectors = eigen(matrix)

print("Eigenvalues:", eigenvalues)
print("Eigenvectors:", eigenvectors)