def determinant(matrix):
    """
    Calcula recursivamente o determinante de uma matriz quadrada.
    `matrix` deve ser uma lista de listas (n x n).
    Retorna o valor numérico do determinante.
    """
    # Validações básicas
    if not matrix or any(len(row) != len(matrix) for row in matrix):
        raise ValueError("A matriz precisa ser quadrada e não vazia.")

    n = len(matrix)

    # Caso base: 1x1
    if n == 1:
        return matrix[0][0]

    # Caso base: 2x2 para evitar recursões desnecessárias
    if n == 2:
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]

    det = 0
    # Expansão pelo primeiro elemento da primeira linha
    for col in range(n):
        # Construir menor: remover linha 0 e coluna col
        minor = [
            [matrix[i][j] for j in range(n) if j != col]
            for i in range(1, n)
        ]
        cofactor = ((-1) ** col) * matrix[0][col]
        det += cofactor * determinant(minor)
    return det


# Matriz 1x1
print(determinant([[5]]))  # 5

# Matriz 2x2
print(determinant([[1, 2], [3, 4]]))  # 1*4 - 2*3 = -2

# Matriz 3x3
A = [
    [1, 3, 5, 9],
    [1, 3, 1, 7],
    [4, 3, 9, 7],
    [5, 2, 0, 9]
]
print(determinant(A))  # Resultado esperado: -306
