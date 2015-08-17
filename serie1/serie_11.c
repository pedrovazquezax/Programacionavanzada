#include<stdio.h>
#include<stdlib.h>

main()
{
       FILE *ap,*ap2,*ap3;
       char c[100];
       ap=fopen("archivo1_s11.txt","r");
       ap2=fopen("archivo2_s11.txt","r");
       ap3=fopen("archivo3_s11.txt","w");

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

