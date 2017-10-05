 #include <stdio.h>
#include <stdlib.h>

int main()
{
            int num;
            printf("Introduzca un numero:   ");
    scanf("%d",&num);
    
    if (num%2==0) {
       printf("el numero es par pares.\n");
    }
    else
    {
       printf("el numero no es par\n");
    }

    system("PAUSE");     
    return 0;
}
