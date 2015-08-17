//Gerardo Balbuena Navor
#include<stdio.h>
#include<stdlib.h>
void main()
{
      FILE *ap,*ip;
      int n,i;
      ap=fopen("productos.txt","r");
      ip=fopen("precio_vent.txt","w");
      printf("\n\tCuantos productos son: ");
      scanf("%d",&n);
      char produc[n][20];
      float precio[n];
         for(i=0;i<n;i++)
         {
             fscanf(ap,"%s",&produc[i]);
             fscanf(ap,"%f",&precio[i]);
             precio[i]=precio[i]+(precio[i]*.15);
             fprintf(ip,"\n%s\t%.2f",produc[i],precio[i]);
         }
      printf("\n\n\t");
      system("pause");
}
