#include<stdio.h>
#include<stdlib.h>

#define x 20

int main(){	
	printf("Pointers:");
	int A[x],i;
	int *p;
	
	for (i=0;i<x;i++){
		A[i]=i;
		p=&A[i];
		printf("\n%3d : %d",*(A+i),p);
	}
	
	return 0;
}
