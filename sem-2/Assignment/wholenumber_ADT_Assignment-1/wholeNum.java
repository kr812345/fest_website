public class wholeNum {
    public static int getZero() {
        return 0;
    }

    public static boolean isZero(int x) {
        return x == 0;
    }

    public static int add(int x, int y) {
        if (x + y < 0) {
            return 0;
        } else if (x + y > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        } else {
            return x + y;
        }
    }

    public static int subtract(int x, int y) {
        if (x - y < 0) {
            return 0;
        } else if (x - y > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        } else {
            return x - y;
        }
    }

    public static int divide(int x, int y) {
        if (x <= 0 || y <= 0) {
            return 0;
        } else if (x / y > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        } else {
            return x / y;
        }
    }

    public static int successor(int x) {
        if (x + 1 < 0) {
            return 0;
        } else if (x + 1 > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        } else {
            return x + 1;
        }
    }

    public static int predecessor(int x) {
        if (x - 1 < 0) {
            return 0;
        } else if (x - 1 > Integer.MAX_VALUE) {
            return Integer.MAX_VALUE;
        } else {
            return x - 1;
        }
    }

    public static boolean equal(int x, int y) {
        return x == y;
    }

    public static void main(String[] args) {
        System.out.println("true: 1; false: 0;");
        int x = 6;
        int y = 4;
        System.out.println("Get Zero: " + getZero());
        System.out.println("Is Zero: " + isZero(x));
        System.out.println("add (" + x + "," + y + "): " + add(x, y));
        System.out.println("subtract (" + x + "," + y + "): " + subtract(x, y));
        System.out.println("divide (" + x + "," + y + "): " + divide(x, y));
        System.out.println("successor (" + y + "): " + successor(y));
        System.out.println("predecessor (" + x + "): " + predecessor(x));
        System.out.println("equal (" + x + "," + y + "): " + equal(x, y));
    }
}
