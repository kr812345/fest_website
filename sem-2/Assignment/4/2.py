ROWS = 3
COLS = 4

def createSparseArray(SparseArray):
    sparse = ""
    for i in range(ROWS):
        for j in range(COLS):
            sparse += str(SparseArray[i][j]) + " "
        sparse += "\n"
    return sparse

def setValue(SparseArray, i, j, value):
    if 0 <= i < ROWS and 0 <= j < COLS:
        SparseArray[i][j] = value
    else:
        print("Index out of range.")

def getValue(SparseArray, i, j):
    if 0 <= i < ROWS and 0 <= j < COLS:
        return SparseArray[i][j]
    else:
        print("Index out of range.")
        return None

def addValue(SparseArray, i, j, value):
    if 0 <= i < ROWS and 0 <= j < COLS:
        SparseArray[i][j] += value
    else:
        print("Index out of range.")

def removeValue(SparseArray, i, j):
    if 0 <= i < ROWS and 0 <= j < COLS:
        SparseArray[i][j] = 0
    else:
        print("Index out of range.")

def getNumRows():
    return ROWS

def getNumCols():
    return COLS

def transpose(SparseArray):
    transposedArray = [[0] * ROWS for _ in range(COLS)]
    for i in range(ROWS):
        for j in range(COLS):
            transposedArray[j][i] = SparseArray[i][j]
    return transposedArray

def multiplyScalar(SparseArray, factor):
    for i in range(ROWS):
        for j in range(COLS):
            SparseArray[i][j] *= factor

def add(SparseArray, Sparse_2):
    for i in range(ROWS):
        for j in range(COLS):
            SparseArray[i][j] += Sparse_2[i][j]

def multiply(SparseArray, Sparse_2):
    result = [[0] * COLS for _ in range(ROWS)]
    for i in range(ROWS):
        for j in range(COLS):
            for k in range(COLS):
                result[i][j] += SparseArray[i][k] * Sparse_2[k][j]
    return result

def toDenseArray(SparseArray):
    denseArray = [[0] * COLS for _ in range(ROWS)]
    for i in range(ROWS):
        for j in range(COLS):
            denseArray[i][j] = SparseArray[i][j]
    return denseArray

SparseArray = [
    [0, 1, 0, 0],
    [2, 0, 0, 4],
    [1, 0, 0, 0]
]

Sparse_2 = [
    [0, 2, 1, 0],
    [1, 0, 0, 0],
    [0, 0, 9, 0]
]

print("Sparse Array:")
print(createSparseArray(SparseArray))
print("Setting the value of 5 at (1,1).")
setValue(SparseArray, 1, 1, 5)
print("Value at (2,2):", getValue(SparseArray, 2, 2))
print("After adding 2 at (3,3):")
addValue(SparseArray, 2, 3, 2)
removeValue(SparseArray, 2, 3)
print("Number of rows:", getNumRows())
print("Number of columns:", getNumCols())
print("Transposed Matrix:")
transposed = transpose(SparseArray)
for row in transposed:
    print(row)
print("Multiplied by 8:")
multiplyScalar(SparseArray, 8)
print("Addition of two Sparse matrix:")
add(SparseArray, Sparse_2)
for row in SparseArray:
    print(row)
print("Multiplication of Two Sparse Matrix:")
result = multiply(SparseArray, Sparse_2)
for row in result:
    print(row)
print("Sparse Matrix to Dense Matrix:")
DenseArray = toDenseArray(SparseArray)
for row in DenseArray:
    print(row)
