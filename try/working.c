#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a,*b;
	a = malloc(sizeof(int));
	b = a;
	
	printf("%d",*b);
}

