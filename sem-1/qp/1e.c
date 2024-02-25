#include <stdio.h>

int main(){
	int a;
	int *j;
	j = &a;
	scanf("%d",*(&j));
	printf("%d",*(&j));
	return 0;
}