# include <stdio.h>
# include <math.h>
# include <string.h>
int main(){
	int años=15;
	int diasaño=365;
	int diast=0;
	int añobis=0;
	int i;
	/*printf("Cuantos años son: \n");	
	scanf("%i",&años);
	for (i=años;i>0;i--){
		if (añobis<4){
			diast=diast+diasaño;
			añobis ++;
		}
		else{
			diast=diast+diasaño+1;
			añobis=0;
		}

	}*/
	diast=(años*diasaño)+(años/4);
	printf("En %i hay %i años \n",años,diast);

	return 0;
}