#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int *p,N;
	printf("How many numbers would you like to print? ");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));

	int i;
	for (i=0;i<N;i++){
		p[i]=i+1;
	}
	
	for (i=0;i<N;i++){
		printf("\n%d",p[i]);
	}
	
	return 0;
}
