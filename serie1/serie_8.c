#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    printf("A partir de un archivo muestra lo que dice pero al reves.\n\n");
       int i=0;
       char c[100];
       FILE *ap;
       ap=fopen("prueba.txt","r");

       if(ap==NULL)
       printf("\n\tERROR\n");

       else
	   {
            while(feof(ap)==NULL)
			{
            c[i]=fgetc(ap);
            i++;
            }

            for(i=strlen(c);i>=0;i--)
            printf("%c",c[i]);

       }
       printf("\n\n");
       system("PAUSE");
}
