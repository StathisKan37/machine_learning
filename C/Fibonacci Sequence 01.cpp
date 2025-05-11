#include<stdio.h>
#include<stdlib.h>

int main (void){
	int a;
	printf ("Type the value of Fibonacci sequence: ");
	scanf("%d",&a);
	
	int i,t1=0,t2=1,y=0;
	for (i=0;i<=a;i++){
		if (i==0){y=0;}
		else if (i==1){y=1;}
		else{
			y=t1+t2;
			t1=t2;
			t2=y;
		}
	}
	printf ("The Fibonacci number you asked for, is: %d",y);
	return 0;
}
