//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *ap;

       ap=fopen("datos.txt","r");
       char s;
       int pal=0,letras=0,espacios,lineas=0;
       if(ap==NULL)
       printf("\n\tERROR\n");

       else{
            while(feof(ap)==NULL){
               s=fgetc(ap);

               if(s==' '||s=='\t'||s=='\n'||s==EOF)
                {
                  pal++;
                  espacios=pal-1;
                }
               else{
                     if(s!=' '||s!='\t'||s!='\n'||s==EOF||s!='$'||s!='&'||s!='@'||s!='/')
                     letras++;
                     else if(s=='\n')
                         lineas++;
                }
               }

               printf("\n\n\tEl numero de palabras es: %d\t",pal);
               printf("\n\n\tEl numero de letras es: %d\t",letras);
               printf("\n\n\tEl numero de lineas es: %d\t",lineas);
               printf("\n\n\tEl numero de espacios es: %d\t",espacios);

            }
     system("PAUSE");
       }

