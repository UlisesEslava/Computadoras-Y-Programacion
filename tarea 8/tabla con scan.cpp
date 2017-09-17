#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,s;
    printf("ingresa un numero para la tabla""\n");
    scanf("%d",&i);
    printf("ingresa hasta que tabla quieres llegar""\n");
    scanf("%d",&s);
    for(i=i;i<=s;i=i+1){
        for(j=1;j<=10;j=j+1){
            printf("%d x %d = %d\n",i,j,i*j);
            }
        printf("\n");
        }
    printf("fin del programa");
    system("PAUSE");     
    return 0;
    }
