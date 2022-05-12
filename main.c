#include <stdio.h>
#include <stdlib.h>

int main()
{
    int band,num,max1,max2;

    band=0;

    printf("Ingrese el numero: ");
    scanf("%d",&num);
    fflush(stdin);

    while(num!=0)
    {
        if(band==0)
        {
            max1=num;
            band=1;
        }
        else if(num>max1)
        {
            max2=max1;
            max1=num;
        }
        else if(band==1||num>max2)
        {
            max2=num;
            band=2;
        }
        printf("Ingrese el numero: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    switch(band)
    {
        case 0:
            printf("No hay numeros");
            break;
        case 1:
            printf("Solo se ingreso un numero: %d",max1);
            break;
        default:
            printf("Primer maximo: %d, Segundo maximo: %d",max1,max2);
            break;
    }

    return 0;
}
