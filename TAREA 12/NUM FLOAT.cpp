#include <stdio.h> 
int main (){ 
    int num1; 
    float num2; 
    printf("ingrese el primer numero\n");     
    scanf("%d",&num1); 
    printf("ingrese el segundo numero con decimales\n"); 
    scanf("%f",&num2);
    if(num1<num2){ printf("el numero 1 es menor que el numero 2\n"); 
        }
    else{ printf("el numero 1 es mayor que el numero 2 \n");
        return 0; 
        } 
    }
