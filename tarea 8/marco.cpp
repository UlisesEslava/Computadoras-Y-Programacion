#include <stdio.h>
#include <stdlib.h>
int main(){
    int f=0;
    int c=0;
    for(c=0;c<6;c=c+1){
        printf("+");
        }
    printf("\n");
    for(f=0;f<4;f=f+1){
        printf("+");
        for(c=0;c<4;c=c+1){
            printf(" ");
            }
        printf("+\n");
        }
    for(c=0;c<6;c=c+1){
        printf("+");
        }
    printf("\n");
    printf("Fin Del Programa\n");
    system("PAUSE");     
    return 0;
    }
