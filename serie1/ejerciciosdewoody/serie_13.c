#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int numerosale[30],lim,i,j;
    printf("\n\tHasta que numero quieres que se genere \n\t el arreglo de numeros aleatorios: ");
    scanf("%d",&lim);
    srand((unsigned)time(NULL));
    for(i=0;i<30;i++)
        numerosale[i]=rand()%lim+1;
    for(i=0;i<30;i++)
        for(j=30;j>0;j--)
        {
            if(numerosale[i]==numerosale[j])
                numerosale[j]=rand()%lim+1;

        }
    for(i=0;i<30;i++)
        printf("\n\tEl arreglo de numero aleatorio es %3d\n\t",numerosale[i]);
	system("pause");
}
