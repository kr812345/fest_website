#include <iostream>
using namespace std;
int main(){
    //list.insert
    int n = 10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // Print the original array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    printf("\n");
    // Element to be inserted
    int x = 50;
    // Position at which element is to be inserted
    int pos = 5;
    // Increase the size of an array by 1
    n++;
    // Shift the element forward
    for(int i=n-1; i>=pos; i--){
        arr[i] = arr[i-1];
    }
    // Insert x at pos
    arr[pos-1] = x;
    // Print the updated array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";

    }
    return 0;
}