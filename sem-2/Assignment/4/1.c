#include <stdio.h>

void createTermDocMatrix(int Num_Terms,int Num_Docs) {
    int matrix[Num_Docs][Num_Terms];
}

void updateTermFreq(int matrix[5][6],int term_index,int doc_index, int freq) {
    matrix[doc_index][term_index] = freq;
}

void getTermFreq(int matrix[5][6], int term_index, int doc_index) {
    printf("%d",matrix[doc_index][term_index]);
}

void getDocFreq(int matrix[5][6],int term_index) {
    int TDocFreq = 0;
    for (int Doc_index = 0; Doc_index < 5; Doc_index++) {
        TDocFreq += matrix[Doc_index][term_index];
    }
    printf("%d", TDocFreq);
}

void getTotalTermsInDoc(int matrix[5][6],int doc_index) {
    int TTermFreq = 0;
    for (int term_index = 0; term_index < 6; term_index++) {
        TTermFreq += matrix[doc_index][term_index];
    }
    printf("%d", TTermFreq);
} 

void toSparseMatrix(int matrix[5][6]) {
    int Sparse[5][6];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if ( matrix[i][j] != 0) {
                Sparse[i][j] = matrix[i][j];
            }
        }
    }     
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d",Sparse[i][j]);
        }
        printf("\n");
    }
}

int main() {
    createTermDocMatrix(5,6);
    int matrix[5][6] = {{23,39,4,0,20},
                  {34,5,54,0,0},
                  {3,30,3,2,22},
                  {1,2,0,0,32},
                  {23,5,6,5,4},
                  {9,8,78,67,6}}; 
    updateTermFreq(matrix, 3, 4, 69);
    updateTermFreq(matrix, 4, 5, 0);
    updateTermFreq(matrix, 2, 3, 96);
    getTermFreq(matrix, 3, 4);
    getTermFreq(matrix, 2, 3);
    getTermFreq(matrix, 1, 1);
    getDocFreq(matrix,3);
    getTotalTermsInDoc(matrix,2);
    toSparseMatrix(matrix);
    return 0;
}
