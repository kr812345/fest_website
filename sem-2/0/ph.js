function append(x) {
a[a.length] = x;
return a;
}
function extend(b) {
        for (i = 0; i < (a.length + b.length); i++){
            a[a.length + i ] = b[i];
            return a;
        }
    }
function insert(i,x) {
        a[i] = x;
        return a;
    }
function remove(x) {

    }


const a = [];
append(1);
append(2);
append(3);
append(4);
console.log("After appending: ");
console.log(a);
extend([5,6,7,8]);
console.log("After extending: ");
console.log(a);
