
#include<stdio.h>
#include <stdlib.h>
main(){
int x,i,j;
printf("Inserta el lado del cuadrado:\n ");
scanf("%d",&x);
for(i=1;i<=x;i++){
	if (i==1 || i==x)
	for(j=1;j<=x;j++){
		printf("*");
		}
		else
		{
		{
			printf("*");
			}
			for(j=1;j<=x-2;j++)
			printf(" ");
			printf("*");
			}
			printf("\n");

}
system("PAUSE");
return 0;
}

