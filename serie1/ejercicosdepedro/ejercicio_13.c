//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int numerosale[30],lim,i,j;
    printf("\n Arreglo de numeros aleatorios: \n");
    lim=1000;
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
        numerosale[i]=rand()%lim+1;
    for(i=0;i<10;i++)
        for(j=10;j>0;j--)
        {
            if(numerosale[i]==numerosale[j])
                numerosale[j]=rand()%lim+1;

        }
    for(i=0;i<10;i++)
        printf("[%i]=A[%d]\n",i+1,numerosale[i]);
	system("pause");
}
