//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float suma(float *x, float *y);


main(){
       int n,m ;
       printf("El programa lee una matriz de archivo e ingresa una y despues realiza la suma.\n");
       printf("\nFILAS?");
       scanf("%d",&n);
       printf("\nColumnas?");
       scanf("%d",&m);
       float **E;
    	float **ap;
       ap=(float**)malloc(n*sizeof(float*));
       for(int i=0;i<n;i++)
       ap[i]=(float*)malloc(m*sizeof(float));

	   for (int i=0;i<n;i++)
       for(int j=0;j<m;j++){
       	printf("Dame el elemento A[%i][%i]",i,j);
       	scanf("%f",&ap[i][j]);
       }


       FILE *apd,*ap1;
       apd=fopen("datosejer3.txt","r");
       ap1=fopen("resultadosejer3.xls","w");

       E=(float**)malloc(n*sizeof(float*));
       for(int i=0;i<n;i++)
       E[i]=(float*)malloc(m*sizeof(float));

       if(apd==NULL||ap1==NULL)
       printf("ERROR FATAL DE LINUX\n");

       else{
       fprintf(ap1,"\tla matriz de la Suma es :");

       for(int i=0;i<n;i++){
       fprintf(ap1,"\n");
       for(int j=0;j<m;j++)
       {
       fscanf(apd,"%f",&E[i][j]);
       fprintf(ap1,"\t %f",suma(&ap[i][j],&E[i][j]));
       }
       }
   }
       fclose(apd);
    	fclose(ap1);
    	for(int i=0;i<n;i++)
		free(ap[i]);
		free(ap);
		for(int i=0;i<n;i++)
		free(E[i]);
		free(E);



       system("PAUSE");

       }
float suma(float *x, float *y){
      return *x+*y;
      }


