#include <iostream>
#include <limits>

using namespace std;

typedef unsigned int wholeNum;

wholeNum get_zero() {
    return 0;
}

bool is_zero(wholeNum x) {
    return x == 0;
}

wholeNum add(wholeNum x, wholeNum y) {
    if (x > numeric_limits<wholeNum>::max() - y) {
        return numeric_limits<wholeNum>::max();
    } else {
        return x + y;
    }
}

wholeNum subtract(wholeNum x, wholeNum y) {
    if (x < y) {
        return 0;
    } else {
        return x - y;
    }
}

wholeNum divide(wholeNum x, wholeNum y) {
    if (y == 0) {
        return 0;
    } else {
        return x / y;
    }
}

wholeNum successor(wholeNum x) {
    return x + 1;
}

wholeNum predecessor(wholeNum x) {
    if (x == 0) {
        return 0;
    } else {
        return x - 1;
    }
}

bool equal(wholeNum x, wholeNum y) {
    return x == y;
}

int main() {
    cout << "true: 1; false: 0;" << endl;
    wholeNum x = 6;
    wholeNum y = 4;
    cout << "Get Zero: " << get_zero() << endl;
    cout << "Is Zero: " << is_zero(x) << endl;
    cout << "add (" << x << "," << y << "): " << add(x, y) << endl;
    cout << "subtract (" << x << "," << y << "): " << subtract(x, y) << endl;
    cout << "divide (" << x << "," << y << "): " << divide(x, y) << endl;
    cout << "successor (" << y << "): " << successor(y) << endl;
    cout << "predecessor (" << x << "): " << predecessor(x) << endl;
    cout << "equal (" << x << "," << y << "): " << equal(x, y) << endl;
    return 0;
}
