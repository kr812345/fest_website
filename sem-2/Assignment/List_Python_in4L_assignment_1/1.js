

function List() {
    this.array = [];
}

List.prototype.append = function(x) {
    this.array.push(x);
};

List.prototype.extend = function(iterable) {
    this.array.push(...iterable);
};

List.prototype.insert = function(index, x) {
    if (index < 0 || index > this.array.length)
        return;  
    this.array.splice(index, 0, x);
};

List.prototype.remove = function(x) {
    const index = this.array.indexOf(x);
    if (index !== -1)
        this.array.splice(index, 1);
};

List.prototype.pop = function(index) {
    if (index < 0 || index >= this.array.length)
        return -1;  
    return this.array.splice(index, 1)[0];
};

List.prototype.clear = function() {
    this.array = [];
};

List.prototype.index = function(x, start = 0, end = this.array.length) {
    if (start < 0)
        start = 0;
    if (end > this.array.length)
        end = this.array.length;
    return this.array.slice(start, end).indexOf(x);
};

List.prototype.count = function(x) {
    return this.array.filter(num => num === x).length;
};

List.prototype.sort = function(reverse = false) {
    this.array.sort((a, b) => reverse ? b - a : a - b);
};

List.prototype.reverse = function() {
    this.array.reverse();
};

List.prototype.copy = function() {
    return [...this.array];
};

List.prototype.print = function() {
    console.log(`[${this.array.join(', ')}]`);
};

// Test
const myList = new List();
myList.append(1);
myList.append(2);
myList.append(3);
myList.append(4);
console.log("Original List: ");
myList.print();
myList.insert(2, 10);
console.log("After Insertion: ");
myList.print();
myList.remove(3);
console.log("After Removal: ");
myList.print();
console.log("Popped: " + myList.pop(1));
console.log("After Pop: ");
myList.print();
myList.sort();
console.log("After Sorting: ");
myList.print();
myList.reverse();
console.log("After Reversing: ");
myList.print();
const copiedList = myList.copy();
console.log("Copied List: ", copiedList);
myList.clear();
console.log("After Clearing: ");
myList.print();
