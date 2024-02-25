const ROWS = 3;
const COLS = 4;

function createSparseArray(SparseArray) {
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            console.log(SparseArray[i][j] + " ");
        }
        console.log();
    }
}

function setValue(SparseArray, i, j, value) {
    SparseArray[i][j] = value;
}

function getValue(SparseArray, i, j) {
    return SparseArray[i][j];
}

function addValue(SparseArray, i, j, value) {
    SparseArray[i][j] += value;
}

function removeValue(SparseArray, i, j) {
    SparseArray[i][j] = 0;
}

function getNumRows() {
    return ROWS;
}

function getNumCols() {
    return COLS;
}

function transpose(SparseArray) {
    let transposedArray = [];
    for (let i = 0; i < COLS; i++) {
        transposedArray.push([]);
        for (let j = 0; j < ROWS; j++) {
            transposedArray[i].push(SparseArray[j][i]);
        }
    }

    console.log();

    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            console.log(transposedArray[j][i] + " ");
        }
        console.log();
    }
}

function multiplyScalar(SparseArray, factor) {
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            SparseArray[i][j] *= factor;
        }
    }
}

function add(SparseArray, Sparse_2) {
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            SparseArray[i][j] += Sparse_2[i][j];
        }
    }
}

function multiply(SparseArray, Sparse_2) {
    // let result = Array.from({ length: ROWS }, () => Array.from({ length: COLS }, () => 0));
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            for (let k = 0; k < COLS; k++) {
                SparseArray[i][j] += SparseArray[i][k] * Sparse_2[k][j];
            }
        }
    }

    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            console.log(result[i][j] + " ");
        }
        console.log();
    }
}

function toDenseArray(SparseArray, DenseArray) {
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            if (SparseArray[i][j] != 0) {
                DenseArray[i][j] = SparseArray[i][j];
            }
        }
    }
    for (let i = 0; i < ROWS; i++) {
        for (let j = 0; j < COLS; j++) {
            console.log(DenseArray[i][j] + " ");
        }
        console.log();
    }
}

let SparseArray = [
    [0, 1, 0, 0],
    [2, 0, 0, 4],
    [1, 0, 0, 0]
];

let Sparse_2 = [
    [0, 2, 1, 0],
    [1, 0, 0, 0],
    [0, 0, 9, 0]
];

createSparseArray(SparseArray);
console.log("Setting the value of 5 at (1,1).");
setValue(SparseArray, 1, 1, 5);
console.log("Value at (2,2): " + getValue(SparseArray, 2, 2));
console.log("After adding 2 at (3,3): ");
addValue(SparseArray, 3, 3, 2);
removeValue(SparseArray, 2, 3);
console.log("\nNumber of rows: " + getNumRows());
console.log("Number of columns: " + getNumCols());
console.log("Transposed Matrix:");
transpose(SparseArray);
console.log("Multiplied by 8: ");
multiplyScalar(SparseArray, 8);
console.log("Addition of two Sparse matrix:");
add(SparseArray, Sparse_2);
console.log("Multiplication of Two Sparse Matrix:");
multiply(SparseArray, Sparse_2);
console.log("Sparse Matrix to Dense Matrix:");
let DenseArray = [];
toDenseArray(SparseArray, DenseArray);
