#include <stdio.h>

int main()
{
    int array[88];
    int entero;
    int K=0;
    
    for(int i=0; i<88; i++)
    array[i]=i+1;
    
    printf("\n Ingrese un número entero (1-88): \n");
    scanf("%d", &entero);
    
    for(int i=0; i<88; i++)
    {
        if(array[i] == entero)
        {
            printf("\n Valor encontrado en la posición: %d\n", i);
            K=1;
            break;
            
        }
    }
    if(!K)
    {
        printf("\n Valor no encontrado \n");
    }

    return 0;
}
