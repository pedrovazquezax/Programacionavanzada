//Vazquez Rodriguez Pedro Antonio
//Valenzuela Rangel Marisol
# include <stdio.h>
# include <conio.h>
# include <math.h>
# include <string.h>

int main()
   {
     char pal[40],pal2[40];
     int n,x,a=0,p=0,j=0;
     char b=' ';
     printf("El programa verifica si una palabra es palindroma");
     printf("\n Ingrese palabra: ");
     gets(pal); //obtiene la palabra
     n=strlen(pal); //de que tamaño es la palabra 1

	 for (int i=0;i<=n;i++) //copia la palabra 1 a la palabra 2
	{
	   if (pal[i]==b)
		i++;
	  pal2[j]=pal[i];
	  j++;
	 }
	n=strlen(pal2);    //de que tamaño es la palabra 2

	for (x=n-1;x>=0;x--) //compara la palabra original(pal 1) vs la palabra alrevez(pal 1)
	{
	 if (pal2[x]==pal2[a])
	     p++;
	a++;
	}
    if (p==n) // si p es ifual a n(tamaño de la palabra 2 ) la palabra es pun palindromo si no, no lo es
	printf("\n Si es palindromo  ");
      else
       printf ("\n No es palindromo  ");
    getche();
    }
