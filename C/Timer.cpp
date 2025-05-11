# include <stdio.h>
# include <stdlib.h>
# include <time.h>

void time_print (int a){
	system("cls");
	int t1,t2,t3;
	t1=a/600;
	t2=(a%600)/10;
	t3=(a%600)%10;
	printf("%2d:%2d.%1d",t1,t2,t3);
}

int main (void){
	int a=0;
	for (a=0;a<=300;a++){
		time_print(a);
	}
}
