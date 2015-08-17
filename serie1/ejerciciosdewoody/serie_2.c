//Gerardo Balbuena Navor

#include <stdio.h>
#include <stdlib.h>

struct agenda
{
	char nombre[30];
	int edad;
	int tel;
};

void imprimir(struct agenda c[],int n);

main()
{
	printf("El programa captura varios datos y los muestra en un archivo\n");
	FILE *ap;
 	int i,n;

 	printf("\n\n\t Indica el n%cmero de personas a registrar:\t",163);
 	scanf("%d",&n);

 	ap=fopen("agenda.txt","w");
	struct agenda c[n];
 	for (i=0;i<n;i++)
 	{
 		printf("\n\t Ingresa el nombre de la persona %d:\t",i+1);
		fflush(stdin);
		gets(c[i].nombre);
		printf("\n\t Ingresa la edad de la persona %d:\t", i+1);
        scanf("%i",&c[i].edad);
        printf("\n\t Ingresa el tel%cfono de casa de la persona %d:\t",130,i+1);
        scanf("%d",&c[i].tel);
 	}

 	imprimir(c,n);

	for(i=0;i<n;i++)
	  {
       fprintf(ap,"\n\t %s tiene %d a%cos y su telefono de casa es %d \n\t",c[i].nombre,c[i].edad,164,c[i].tel);
      }

    fclose(ap);
    printf("\n");
    system("pause");
}

void imprimir(struct agenda c[],int n)
	{
	int i;
	for(i=0;i<n;i++)
    	printf("\n\t %s tiene %d a%cos y su telefono de casa es %d \n\t",c[i].nombre,c[i].edad,164,c[i].tel);
	}

