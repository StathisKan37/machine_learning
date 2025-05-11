# include <stdio.h>
# include <stdlib.h>

int parag(int x);

int main (void){
	int x;
	printf("Dose mas to paragodiko sou : \n");
	scanf("%d", &x);
	x=parag(x);
	
	printf("%d", x);
	return 0;
}

int parag(int x){
	if(x==1) return 1;
	else x=x*parag(x-1);
}
