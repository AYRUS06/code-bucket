import numpy as np

def eigen_decomp(matrix):
    # Compute the eigenvalues and eigenvectors of a 3 x 3 matrix
    a = matrix[0,0]
    b = matrix[0,1]
    c = matrix[0,2]
    d = matrix[1,0]
    e = matrix[1,1]
    f = matrix[1,2]
    g = matrix[2,0]
    h = matrix[2,1]
    i = matrix[2,2]

    # Compute the characteristic polynomial coefficients
    p1 = a*e*i + b*f*g + c*d*h - c*e*g - b*d*i - a*f*h
    p2 = -(a*e + b*f + c*d) - i - h - g
    p3 = a + e + i

    # Solve the characteristic polynomial to get the eigenvalues
    coeffs = [p3, p2, p1]
    roots = np.roots(coeffs)
    eigenvalues = np.sort(roots)

    # Compute the eigenvectors corresponding to the eigenvalues
    eigenvectors = []
    for eigval in eigenvalues:
        # Solve the equation (A - λI)x = 0 for each eigenvector
        temp = np.subtract(matrix, np.multiply(np.identity(3), eigval))
        eigvec = np.array([0, 0, 0])
        if np.linalg.matrix_rank(temp) < 3:
            continue
        eigvec = np.linalg.solve(temp, np.array([0, 0, 0]))
        eigenvectors.append(eigvec)

    return eigenvalues, eigenvectors

# Example usage:
matrix = np.array([[323, 12, 21],
                  [321, -312, 213],
                  [31.2, 21, 413]])
eigenvalues, eigenvectors = eigen_decomp(matrix)
print("Eigenvalues:", eigenvalues)
print("Eigenvectors:", eigenvectors)