//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct cuates{
       char nombre[30];
       int edad;
       float peso;
       } ;

main(){
       int n=100,e,i;
       float p;
       char s[30],s1[30];

       FILE *F;


        F=fopen("cuates.txt","r");
       if(F==NULL)
       printf("ERROR FATAL DE LINUX");

       else{
            printf("Que amigo buscas? ");
            fflush(stdin);
            gets(s);
            for(i=0;i<n;i++){
            fscanf(F,"%s",&s1);
            if(strcmp(s,s1)==0){
            fscanf(F,"%d",&e);
            fscanf(F,"%f",&p);
            printf("%s tiene %d años y pesa %f kilos\n",s1,e,p);
            }             }
            fclose(F);
       system("PAUSE");
       }}

