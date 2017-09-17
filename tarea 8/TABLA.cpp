#include <stdio.h>
 #include <stdlib.h>
int main(){
    int i=3;
    int s=6;
    int j=0;
    for(i=3;i<=s;i=i+1){
        for(j=1;j<=10;j=j+1){
            printf("%d*%d=%d\n",i,j,i*j);
            }
        printf("\n");
        }
    printf("fin del programa");
     system("PAUSE");     
    return 0;
    }
