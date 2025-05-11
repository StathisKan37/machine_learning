# include <stdio.h>
# include <stdlib.h>

int fibonacci(int a);

int main (void){
	int a;
	printf("Type a number: ");
	scanf("%d",&a);
	int y=fibonacci(a);
	printf ("%d",y);
}

int fibonacci(int a){
	if (a==0){
		return 0;}
	else if (a==1){
		return 1;}
	else{
		return (fibonacci(a-1)+fibonacci(a-2));
	}
}
