function updateTermFreq(matrix, termIndex, docIndex, freq) {
    matrix[docIndex][termIndex] = freq;
}

function getTermFreq(matrix, termIndex, docIndex) {
    console.log(matrix[docIndex][termIndex]);
}

function getDocFreq(matrix, termIndex) {
    let TDocFreq = 0;
    for (let docIndex = 0; docIndex < 5; docIndex++) {
        TDocFreq += matrix[docIndex][termIndex];
    }
    console.log(TDocFreq);
}

function getTotalTermsInDoc(matrix, docIndex) {
    let TTermFreq = 0;
    for (let termIndex = 0; termIndex < 6; termIndex++) {
        TTermFreq += matrix[docIndex][termIndex];
    }
    console.log(TTermFreq);
}

function toSparseMatrix(matrix) {
    let sparse = [];
    let count = 0;
    for (let i = 0; i < 5; i++) {
        sparse[i] = [];
        for (let j = 0; j < 6; j++) {
            if (matrix[i][j] !== 0) {
                sparse[i][j] = matrix[i][j];
                count++;
            }
        }
    }
    console.log("Sparse Matrix:");
    for (let i = 0; i < 5; i++) {
        console.log(sparse[i].join(" "));
    }
    console.log("Number of non-zero elements: " + count);
}

const matrix = [[23, 39, 4, 0, 20],
                [34, 5, 54, 0, 0],
                [3, 30, 3, 2, 22],
                [1, 2, 0, 0, 32],
                [23, 5, 6, 5, 4]];

updateTermFreq(matrix, 3, 4, 69);
updateTermFreq(matrix, 4, 5, 0);
updateTermFreq(matrix, 2, 3, 96);
getTermFreq(matrix, 3, 4);
getTermFreq(matrix, 2, 3);
getTermFreq(matrix, 1, 1);
getDocFreq(matrix, 3);
getTotalTermsInDoc(matrix, 2);
toSparseMatrix(matrix);
