#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct cuates
{
       char nombre[15];
       float prom;
       int edad;
       };

void main()
{
      int i,n,j,ind=324,tam,cont=0;
      char buscar[15];
      FILE *ap;
      ap=fopen("agenda.txt","r");
      printf("\n\n\tCuantos nombres tienes en tu archivo: ");
      scanf("%d",&n);
      printf("\n\n\tQue nombre desea buscar: ");
      fflush(stdin);
      gets(buscar);
      struct cuates C[n];
      for(i=0;i<n;i++){
           fscanf(ap,"%s",&C[i].nombre);
           fscanf(ap,"%d",&C[i].edad);
           fscanf(ap,"%f",&C[i].prom);
                                      }

      tam=strlen(buscar);
      for(j=0;j<n;j++){
      for(i=0;i<tam;i++){
         if(buscar[i]==C[j].nombre[i])
         cont++;}
         if(cont==tam)
         ind=j;
         cont=0;}

      if(ind==324)
      printf("\n\n\tEl nombre que ingreso no se encuentra en la base de datos");
      else
      printf("\n\n\tLos datos de %s son; edad:%d y promedio:%.2f",buscar,C[ind].edad,C[ind].prom);
      printf("\n\n\t");
      system("pause");

}
