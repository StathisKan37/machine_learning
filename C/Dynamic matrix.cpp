# include <stdio.h>
# include <stdlib.h>

int main(){
	// Definition of the variables
	int i,j,x,y;
	int **mtrx;
	
	system("color 2");
	
	// Requesting the dimensions of the matrix
	printf("Give us the dimensions of the matrix \nRows: ");
	scanf("%d",&x);
	printf("Columns: ");
	scanf("%d",&y);
	
	mtrx=(int**)malloc(x*sizeof(int*));
	
	for (i=0;i<x;i++){
		mtrx[i]=(int*)malloc(y*sizeof(int));
	}
	
	int k=0;
	
	for(i=0;i<x;i++){
		for (j=0;j<y;j++){
			k=k+1;
			mtrx[i][j]=k;
		}
	}
	
	for(i=0;i<x;i++){
		for (j=0;j<y;j++){
			printf("%5d",mtrx[i][j]);
		}
		printf("\n");
		
		//free(mtrx);
	}
}
