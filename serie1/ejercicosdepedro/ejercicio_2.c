//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct agenda{
       char nombre[30];
       char dir[30];
       char tel[10];
       } ;

main(){
       int n;

       printf("\t\t***AGENDA***\n");
       printf("Dame el numero de contactos a poner en la agenda:  ");
       scanf("%d",&n);
       agenda *ap;
       ap=(agenda*)malloc(n*sizeof(agenda));

       for(int i=0;i<n;i++){
               printf("\nDame el nombre del contacto %i\n",i+1);
               fflush(stdin);
               gets(ap[i].nombre);
               printf("\nDame la direccion de %s\n",ap[i].nombre);
               gets(ap[i].dir);
               printf("\nDame el telefono de %s\n",ap[i].nombre);
               gets(ap[i].tel);
                }

       FILE *F;
       F=fopen("agenda.xls","w");
       if(ap==NULL)
       printf("ERROR FATAL DE LINUX");

       else{
                fprintf(F,"Nombre\tDireccion\tTelefono");
       for(int i=0;i<n;i++)
       fprintf(F,"\n%s\t%s\t%s",ap[i].nombre,ap[i].dir,ap[i].tel);
            fclose(F);
        }


       free(ap);
       system("PAUSE");
       }

