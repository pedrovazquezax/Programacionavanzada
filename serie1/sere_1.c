//Gerardo Balbuena Navor
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int **ap, **ap1;
	int asit, asit1;
	int n,m,i,j;
    printf("El programa busca los elementos mas grandes de 2 matrices y los suma.\n\n");
	printf("\n\n\t Ingrese el n%cmero de Filas: \t",163);
    scanf("%d",&n);
    printf("\n\t Ingrese el n%cmero de Columnas: \t",163);
    scanf("%d",&m);

    ap= (int**)malloc(n*sizeof(int*));
    for( i=0;i<n;i++)
    	ap[i]= (int*)malloc(m*sizeof(int));

    ap1= (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
    	ap1[i]=(int*)malloc(m*sizeof(int));

    for(i=0;i<n;i++)
       for(j=0;j<m;j++)
	   {
        printf("\n\t Ingresa el elemento A(%i,%i) \t",i+1,j+1);
        scanf("%d",&ap[i][j]);
       }

    for(i=0;i<n;i++)
       for(j=0;j<m;j++)
	   {
        printf("\n\t Ingresa el elemento B(%i,%i) \t",i+1,j+1);
        scanf("%d",&ap1[i][j]);
       }

    asit=ap[0][0];
    asit1=ap1[0][0];

    for(i=0;i<n;i++)
       for(j=0;j<m;j++)
	   {
        if(ap[i][j]>=asit)
        	asit=ap[i][j];
        if(ap1[i][j]>=asit1)
        	asit1=ap1[i][j];
        }

    for(i=0;i<m;i++)
       free(ap[i]);
    free(ap);

    for (i=0;i<m;i++)
       free(ap1[i]);
    free(ap1);

    printf("\n\n\t El resultado de la suma es: %d \n",asit+asit1);
	printf("\n");
	system("pause");
}
