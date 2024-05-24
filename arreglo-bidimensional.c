#include <stdio.h>

int main()
{
    int array[9][9];
    int a, b;
    int entero;
    int j=0
    
    printf("-------------------------------");
    printf("-----Arreglo bidimensional-----");
    printf("-------------------------------");
    
    
    for(a=0; a<9; a++)
    {
        for(b=0; b<9; b++)
        {
            array [a][b]=j;
            j++;
        }
    }
    
    printf("\n Ingrese un némero entero (1-81): \n");
    scanf("%d", &entero);
     int encontrado = 0;
     
     for(a=0; a<9; a++)
     {
         for(b=0; b<9; b++)
         {
             if(array[a][b] == entero)
             {
                 printf("\n Valor encontrado en la posición: [%d, %d]\n", a, b);
                 encontrado = 1;
                 break;
             }
         }
     }
     if (!encontrado)
     {
         printf("No encontrado \n");
     }

    return 0;
}