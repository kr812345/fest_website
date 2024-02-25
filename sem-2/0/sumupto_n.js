function sap(n) {
    if (n == 1)
    {
        return 1;
    } else {
        return n + sap(n-1);
    }
}

var n = prompt("Enter a number: ");

console.log("sum upto " + n + ": " + sap(n));
