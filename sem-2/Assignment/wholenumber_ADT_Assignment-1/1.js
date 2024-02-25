function getZero() {
    return 0;
}

function isZero(x) {
    if (x === 0) {
        return true;
    } else {
        return false;
    }
}

function add(x, y) {
    if (x + y < 0) {
        return 0;
    } else if (x + y > Number.MAX_SAFE_INTEGER) {
        return Number.MAX_SAFE_INTEGER;
    } else {
        return x + y;
    }
}

function subtract(x, y) {
    if (x - y < 0) {
        return 0;
    } else if (x - y > Number.MAX_SAFE_INTEGER) {
        return Number.MAX_SAFE_INTEGER;
    } else {
        return x - y;
    }
}

function divide(x, y) {
    if (x <= 0 || y <= 0) {
        return 0;
    } else if (x / y > Number.MAX_SAFE_INTEGER) {
        return Number.MAX_SAFE_INTEGER;
    } else {
        return Math.floor(x / y);
    }
}

function successor(x) {
    if (x + 1 < 0) {
        return 0;
    } else if (x + 1 > Number.MAX_SAFE_INTEGER) {
        return Number.MAX_SAFE_INTEGER;
    } else {
        return x + 1;
    }
}

function predecessor(x) {
    if (x - 1 < 0) {
        return 0;
    } else if (x - 1 > Number.MAX_SAFE_INTEGER) {
        return Number.MAX_SAFE_INTEGER;
    } else {
        return x - 1;
    }
}

function equal(x, y) {
    if (x === y) {
        return true;
    } else {
        return false;
    }
}

let x = 6;
let y = 4; 
console.log("Get Zero:", getZero());
console.log("Is Zero:", isZero(x));
console.log("add (", x, ",", y, "):", add(x, y));
console.log("subtract (", x, ",", y, "):", subtract(x, y));
console.log("divide (", x, ",", y, "):", divide(x, y));
console.log("successor (", y, "):", successor(y));
console.log("predecessor (", x, "):", predecessor(x));
console.log("equal (", x, ",", y, "):", equal(x, y));
