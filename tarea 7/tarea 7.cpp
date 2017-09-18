#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,s,m;
    printf("ingresa 3 valores\n");
    scanf("%d%d%d",&i,&j,&s);
    m=i;
    if(j<m)
    m=j;
    if(s<m)
    m=s;
    printf("el numero menor es %d  \n",m);    
    printf("fin del programa");
    system("pause");
    return 0;
     }
