public class TDM {

    public static void updateTermFreq(int[][] matrix, int termIndex, int docIndex, int freq) {
        matrix[docIndex][termIndex] = freq;
    }

    public static void getTermFreq(int[][] matrix, int termIndex, int docIndex) {
        System.out.println(matrix[docIndex][termIndex]);
    }

    public static void getDocFreq(int[][] matrix, int termIndex) {
        int TDocFreq = 0;
        for (int docIndex = 0; docIndex < 5; docIndex++) {
            TDocFreq += matrix[docIndex][termIndex];
        }
        System.out.println(TDocFreq);
    }

    public static void getTotalTermsInDoc(int[][] matrix, int docIndex) {
        int TTermFreq = 0;
        for (int termIndex = 0; termIndex < 6; termIndex++) {
            TTermFreq += matrix[docIndex][termIndex];
        }
        System.out.println(TTermFreq);
    }

    public static void toSparseMatrix(int[][] matrix) {
        int[][] sparse = new int[5][6];
        int count = 0;
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                if (matrix[i][j] != 0) {
                    sparse[i][j] = matrix[i][j];
                    count++;
                }
            }
        }
        System.out.println("Sparse Matrix:");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 6; j++) {
                System.out.print(sparse[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Number of non-zero elements: " + count);
    }

    public static void main(String[] args) {
        int[][] matrix = {{23, 39, 4, 0, 20},
                          {34, 5, 54, 0, 0},
                          {3, 30, 3, 2, 22},
                          {1, 2, 0, 0, 32},
                          {23, 5, 6, 5, 4}};

        updateTermFreq(matrix, 3, 4, 69);
        updateTermFreq(matrix, 4, 5, 0);
        updateTermFreq(matrix, 2, 3, 96);
        getTermFreq(matrix, 3, 4);
        getTermFreq(matrix, 2, 3);
        getTermFreq(matrix, 1, 1);
        getDocFreq(matrix, 3);
        getTotalTermsInDoc(matrix, 2);
        toSparseMatrix(matrix);
    }
}
