public class SparseMatrix {
    static final int ROWS = 3;
    static final int COLS = 4;

    public static void createSparseArray(int[][] SparseArray) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                System.out.print(SparseArray[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void setValue(int[][] SparseArray, int i, int j, int value) {
        SparseArray[i][j] = value;
    }

    public static int getValue(int[][] SparseArray, int i, int j) {
        return SparseArray[i][j];
    }

    public static void addValue(int[][] SparseArray, int i, int j, int value) {
        SparseArray[i][j] += value;
    }

    public static void removeValue(int[][] SparseArray, int i, int j) {
        SparseArray[i][j] = 0;
    }

    public static int getNumRows() {
        return ROWS;
    }

    public static int getNumCols() {
        return COLS;
    }

    public static void transpose(int[][] SparseArray) {
        int[][] transposedArray = new int[COLS][ROWS];
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                transposedArray[j][i] = SparseArray[i][j];
            }
        }

        System.out.println();

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                System.out.print(transposedArray[j][i] + " ");
            }
            System.out.println();
        }
    }

    public static void multiplyScalar(int[][] SparseArray, int factor) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                SparseArray[i][j] *= factor;
            }
        }
    }

    public static void add(int[][] SparseArray, int[][] Sparse_2) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                SparseArray[i][j] += Sparse_2[i][j];
            }
        }
    }

    public static void multiply(int[][] SparseArray, int[][] Sparse_2) {
        int[][] result = new int[ROWS][COLS];
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                for (int k = 0; k < COLS; k++) {
                    result[i][j] += SparseArray[i][k] * Sparse_2[k][j];
                }
            }
        }

        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void toDenseArray(int[][] SparseArray, int[][] DenseArray) {
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                if (SparseArray[i][j] != 0) {
                    DenseArray[i][j] = SparseArray[i][j];
                }
            }
        }
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                System.out.print(DenseArray[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] SparseArray = {
            {0, 1, 0, 0},
            {2, 0, 0, 4},
            {1, 0, 0, 0}
        };

        int[][] Sparse_2 = {
            {0, 2, 1, 0},
            {1, 0, 0, 0},
            {0, 0, 9, 0}
        };

        createSparseArray(SparseArray);
        System.out.println("Setting the value of 5 at (1,1).");
        setValue(SparseArray, 1, 1, 5);
        System.out.println("Value at (2,2): " + getValue(SparseArray, 2, 2));
        System.out.print("After adding 2 at (3,3): ");
        addValue(SparseArray, 3, 3, 2);
        removeValue(SparseArray, 2, 3);
        System.out.println("\nNumber of rows: " + getNumRows());
        System.out.println("Number of columns: " + getNumCols());
        System.out.println("Transposed Matrix:");
        transpose(SparseArray);
        System.out.println("Multiplied by 8: ");
        multiplyScalar(SparseArray, 8);
        System.out.println("Addition of two Sparse matrix:");
        add(SparseArray, Sparse_2);
        System.out.println("Multiplication of Two Sparse Matrix:");
        multiply(SparseArray, Sparse_2);
        System.out.println("Sparse Matrix to Dense Matrix:");
        int[][] DenseArray = new int[ROWS][COLS];
        toDenseArray(SparseArray, DenseArray);
    }
}
