#include <stdio.h>
#include <stdlib.h>

int main()
{
            int dia;
            printf("Introduzca número del 1 al 7:  ");
    scanf("%d",&dia);

    switch(dia){
              case 1:
                   printf ("Tu numero corresponde al dia Lunes\n");
                   break;
              case 2:
                   printf ("Tu numero corresponde al dia Martes\n");
                   break;
              case 3:
                   printf ("Tu numero corresponde al dia Miércoles\n");
                   break;
              case 4:
                   printf ("Tu numero corresponde al dia Jueves\n");
                   break;
              case 5:
                   printf ("Tu numero corresponde al dia Viernes\n");
                   break;
              case 6:
                   printf ("Tu numero corresponde al dia Sábado\n");
                   break;
              case 7:
                   printf ("Tu numero corresponde al dia Domingo\n");
                   break;
              default:
                   printf ("Opción no válida\n");
                   break;
    }
system("pause");
return 0; 
}
