#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("El programa lee una matriz de archivo e ingresa una y despues realiza la suma.\n\n");

	int **ap2,**ap3,**ap4;
	int n,m,i,j;

	FILE *ap,*ap1;
	ap = fopen("matriz.txt","r");
	ap1 = fopen("resultado.txt","w");

	printf("\n\tIngresa el n%cmero de Filas: \t",163);
    scanf("%d",&n);
    printf("\n\tIngresa el n%cmero de Columnas: \t",163);
    scanf("%d",&m);

    ap3=(int**)malloc(n*sizeof(int*));
    for( i=0;i<n;i++)
        ap3[i]=(int*)malloc(m*sizeof(int));

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
        printf("\n\t Ingresa el elemento A(%d,%d): ",i+1,j+1);
        scanf("%d",&ap3[i][j]);
        }
    printf("\n");
    for(i=0;i<n;i++)
    {
		for(j=0;j<m;j++)
        printf("\t\t %d ",ap3[i][j]);
    printf("\n\n");
    }

    if (ap==NULL)
    {
    printf("\n\n\t Falla al abrir el archivo matriz.txt \n");
	exit (1);
	}
	else
	{
		ap2=(int**)malloc(n*sizeof(int*));
        for( i=0;i<n;i++)
        	ap2[i]=(int*)malloc(m*sizeof(int));

        for( i=0;i<n;i++)
            for( j=0;j<m;j++)
            	fscanf(ap,"%d",&ap2[i][j]);
	}


	ap4=(int**)malloc(n*sizeof(int*));
    for( i=0;i<n;i++)
        	ap4[i]=(int*)malloc(m*sizeof(int));

	for( i=0;i<n;i++)
	{
        for( j=0;j<m;j++)
            fprintf(ap1,"\t\t %d",ap4[i][j]=ap3[i][j]+ap2[i][j]);
    	fprintf(ap1,"\n\n");
	}
	fclose(ap);
	fclose(ap1);
	system("pause");
}
