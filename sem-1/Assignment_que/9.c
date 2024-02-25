#include <stdio.h>
#include <math.h>

float avg();
int max_num();
int min_num();

int main(){
    int arr[] = {245,3,44,2,7,334,654,24,6523,756};
    printf("%.1f",avg(arr));
    return 0;
}


float avg(int arr[]){
    float sum = 0;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum/n;
}