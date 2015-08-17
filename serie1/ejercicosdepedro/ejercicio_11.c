//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>

main()
{
       FILE *ap,*ap2,*ap3;
       char c[100];
       ap=fopen("ejercicio11_1.txt","r");
       ap2=fopen("ejercicio11_2.txt","r");
       ap3=fopen("ejercicio11_3.txt","w");

       if(ap==NULL||ap2==NULL)
       		printf("ERROR");

       else{
            	while(feof(ap)==NULL&&feof(ap2)==NULL)
					{
			            fgets(c,100,ap);
			            fputs(c,ap3);
			            fprintf(ap3,"\n");
			            fgets(c,100,ap2);
			            fputs(c,ap3);
            		}
            }

             system("pause");
}

