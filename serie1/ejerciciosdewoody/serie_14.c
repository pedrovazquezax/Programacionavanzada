#include<stdio.h>
#include<stdlib.h>

void main()
{
      FILE *ap;
      ap=fopen("cambio.txt","r");
      float impo,cam,din;
      fscanf(ap,"%f",&din);
      fscanf(ap,"%f",&impo);
      printf("\n\n\tEl cambio de su importe de %.2f es de %.2f",impo,din-impo);
      printf("\n\n\t");
      system("pause");
}
