//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura
class Funciones{
	//Atributos
	
	double arreglo[];
	double arreglo1[];
	int tam;


	public double f(double x){
    	
    	double y=0.0;
    	int i;
    	for(i=0;i<=tam;i++){
       y+=arreglo[i]*Math.pow(x,i);
   }
   		return y;
    }
    public double f1(double x){
    	
    	double y=0.0;
    	int i;
    	for(i=0;i<tam;i++){
       y+=arreglo1[i]*Math.pow(x,i);
   }
   		return y;
    }


    public void Insertaf(){
    	int i;
		tam=Teclado.entero("Ingresa de que grado es tu polinomio: ");
  
    arreglo=new double [tam+1];
   
    for(i=0;i<=tam;i++)
		{
    	arreglo[i]=Teclado.Double("Ingresa el coeficiente x^"+i+"  ");
 
    	}
    
	}
    public void Derivada(){
    	arreglo1=new double [tam];
    	int i;
    	for(i=1;i<=tam;i++){
    		arreglo1[i-1]=i*arreglo[i];
    	}
    	
	}
}