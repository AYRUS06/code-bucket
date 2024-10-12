#include <stdio.h>
#include <math.h>

#define N 3

void print_matrix(double matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
}

void print_vector(double vector[N]) {
    for (int i = 0; i < N; i++) {
        printf("%f ", vector[i]);
    }
    printf("\n");
}

double dot_product(double vector1[N], double vector2[N]) {
    double result = 0;
    for (int i = 0; i < N; i++) {
        result += vector1[i] * vector2[i];
    }
    return result;
}

void matrix_vector_product(double matrix[N][N], double vector[N], double result[N]) {
    for (int i = 0; i < N; i++) {
        result[i] = dot_product(matrix[i], vector);
    }
}

double norm(double vector[N]) {
    return sqrt(dot_product(vector, vector));
}

void normalize(double vector[N]) {
    double n = norm(vector);
    for (int i = 0; i < N; i++) {
        vector[i] /= n;
    }
}

void power_iteration(double matrix[N][N], double eigenvalue[1], double eigenvector[N]) {
    double b_k[N] = {1, 1, 1};
    double b_k1[N];
    for (int i = 0; i < 10000; i++) {
        matrix_vector_product(matrix, b_k, b_k1);
        normalize(b_k1);
        for (int j = 0; j < N; j++) {
            b_k[j] = b_k1[j];
        }
    }
    matrix_vector_product(matrix, b_k, b_k1);
    *eigenvalue = dot_product(b_k, b_k1) / dot_product(b_k, b_k);
    for (int i = 0; i < N; i++) {
        eigenvector[i] = b_k[i];
    }
}

int main() {
    double matrix[N][N] = {{323, 12, 21},
                  {321, -312, 213},
                  {31.2, 21, 413}};
    double eigenvalue;
    double eigenvector[N];

    power_iteration(matrix, &eigenvalue, eigenvector);

    printf("Eigenvalue: %f\n", eigenvalue);
    printf("Eigenvector: ");
    print_vector(eigenvector);

    return 0;
}