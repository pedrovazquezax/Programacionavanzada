#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    printf("Vamos a dar 100 numeros diferentes para un sorteo de MELATE\ndespues lo mostraremos en un archivo\n\n");
	FILE *ap;
	ap= fopen("resultado_melate.txt","w");
	int A[7],i,j;

	srand(time(NULL));

	for(i=0;i<100;i++)
	{
		for(j=0;j<7;j++)
		{
			A[j]=rand()%60+1;
			fprintf(ap,"%d ",A[j]);
		}
		fprintf(ap,"\n");
	}
	fclose(ap);
    system("PAUSE");
}

