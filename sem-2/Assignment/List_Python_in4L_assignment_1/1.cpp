#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class List {
private:
    vector<int> array;

public:
    void append(int x) {
        array.push_back(x);
    }

    void extend(vector<int>& iterable) {
        array.insert(array.end(), iterable.begin(), iterable.end());
    }

    void insert(int index, int x) {
        if (index < 0 || index > array.size())
            return;  
        array.insert(array.begin() + index, x);
    }

    void remove(int x) {
        array.erase(remove(array.begin(), array.end(), x), array.end());
    }

    int pop(int index) {
        if (index < 0 || index >= array.size())
            return -1;  
        int popped = array[index];
        array.erase(array.begin() + index);
        return popped;
    }

    void clear() {
        array.clear();
    }

    int index(int x, int start = 0, int end = -1) {
        if (end == -1)
            end = array.size();
        for (int i = start; i < end; i++) {
            if (array[i] == x)
                return i;
        }
        return -1;  
    }

    int count(int x) {
        return std::count(array.begin(), array.end(), x);
    }

    void sort(bool reverse = false) {
        if (reverse)
            std::sort(array.rbegin(), array.rend());
        else
            std::sort(array.begin(), array.end());
    }

    void reverse() {
        std::reverse(array.begin(), array.end());
    }

    vector<int> copy() {
        return array;
    }

    void print() {
        cout << "[";
        for (size_t i = 0; i < array.size(); i++) {
            cout << array[i];
            if (i != array.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
};

int main() {
    List myList;
    myList.append(1);
    myList.append(2.2);
    myList.append(3);
    myList.append(4);
    cout << "Original List: ";
    myList.print();
    myList.insert(2, 10);
    cout << "After Insertion: ";
    myList.print();
    myList.remove(3);
    cout << "After Removal: ";
    myList.print();
    cout << "Popped: " << myList.pop(1) << endl;
    cout << "After Pop: ";
    myList.print();
    myList.sort();
    cout << "After Sorting: ";
    myList.print();
    myList.reverse();
    cout << "After Reversing: ";
    myList.print();
    vector<int> copiedList = myList.copy();
    cout << "Copied List: ";
    for (int num : copiedList)
        cout << num << " ";
    cout << endl;
    myList.clear();
    cout << "After Clearing: ";
    myList.print();
    return 0;
}
