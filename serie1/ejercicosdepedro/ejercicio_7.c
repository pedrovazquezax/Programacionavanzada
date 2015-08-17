//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    printf("Crea 100 numeros de participantes en el MELATE y los imprime en un archivo\n\n");
	FILE *ap;
	ap= fopen("resultado_melate.xls","w");
	int A[7],i,j;

	srand(time(NULL));

    fprintf(ap,"RESULTADOS MELATE\tNUMERO 1\tNUMERO 2\tNUMERO 3\tNUMERO4\tNUMERO 5\tNUMERO 6\tNUMERO 7");
	for(i=0;i<100;i++){
      fprintf(ap,"\n participante %i",i+1);
		for(j=0;j<7;j++)
		{
			A[j]=rand()%60+1;
			fprintf(ap,"\t%d",A[j]);
		}


	}
	fclose(ap);
    system("PAUSE");
}

