# include<stdio.h>
# include<stdlib.h>
# include<math.h>

int main(void){
	system("color 17");
	int a, i;
	float x, m[100], y, z;
	
	do{
		printf("Poses metrhseis tha pareis; \n");
		scanf("%d",&a);
		system ("cls");
	}while(a<=0 || a>100);
	
	y=0;
	printf("Grapse tis metrhseis sou: \n");
	for(i=0; i<a;i++){
		scanf("%f",&x);
		m[i]=x;
		y=y+x;
	}
	y=y/a;
	
	z=0;
	for(i=0; i<a;i++){
		x=m[i]-y;
		z=z+pow(x,2);
	}
	z=z/(a-1);
	z=sqrt(z);
	
	printf("H mesh posothta sou einai: \n%f + %f",y,z);
	return 0;
}

