//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){

	FILE *ap;
	char pal[30];
	char p1[30];
	int i=0;

		printf("Que palabra deseas buscar?");
		fflush(stdin);
		gets(pal);

		ap=fopen("palabra.txt","r");

	if (ap==NULL){

		printf("ERROR no se pudo abrir el archivo");

	}else{

		 while(feof(ap)==0){
            fscanf(ap,"%s",&p1);

            if (strcmp(pal,p1)==0){
				i++;
			}
            }


	fclose(ap);

	}


	ap=fopen("palabra.txt","a");

	if (ap==NULL){

		printf("ERROR no se pudo abrir el archivo");

	}else{

if(i=!0){

				printf("Tu palabra se encontro %i veces\n",i);

			}else{

				fprintf(ap,"%s",pal);
				printf("tu palabra ha sido agregrada al final del archivo :)");

			}

	}

	system("PAUSE");






}
