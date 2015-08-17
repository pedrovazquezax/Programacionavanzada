#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


main()
{
	int m, n[26], A[26], i, C[6], aux=0, P[26];
	char c;
	FILE *ap;

	int B[26]={1,2, 5, 10, 25, 50, 75, 100, 200, 300, 400, 500, 750, 1000, 5000, 10000, 25000, 50000, 75000, 100000, 200000, 300000, 400000, 500000, 750000, 1000000};
	srand(time(NULL));

		ap=fopen("maletines.txt","r");
	printf("\n\n");

	if(ap==NULL)
		printf("ERROR 404 FILE NOT FOUND");

	else{

		while(feof(ap)==0){
			c=fgetc(ap);
			printf("%c",c);

		}
	}

	printf("\n\n");

	for (i=0;i<26;i++)
	{
		n[i]=rand()%26;
		printf("%i",n[i]);
	}

	aux=0;
	for (i=0;i<26;i++)
	{
		if(aux==n[i])
			while(rand()%26==aux);
		else
			n[i]=aux;

        printf("%i",n[i]);
	}

	printf("Escoge tu maletin: ");
	scanf("%d", &m);


	for(i=0;i<6;i++)
	{
		printf("\n\nEscoge el maletin %d:\t", i+1);
		scanf("%d", &C[i]);



	}
	printf("\n\n");
	system("PAUSE");
}

