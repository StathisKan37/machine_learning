#include<stdio.h>
#include<stdlib.h>

int main(){
	char text[]="I am not in danger, I am the danger!";
	printf("%s \n",text);
	
	char *str= text;
	int i;
	for (i=0;i<sizeof(text);i++){
		printf("%c",str[i]);
	}
	
	printf("\n");
	
	for (i=0;i<sizeof(text);i++){
		printf("%c",*(text+i));
	}
	
	return 0;
}
