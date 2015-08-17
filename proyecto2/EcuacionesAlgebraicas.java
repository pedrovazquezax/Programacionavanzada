//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura

import java.lang.Math;
class EcuacionesAlgebraicas{

	//Atributos
	double tol= 0.0000001;
	double a=0;
	double b=1;
	double xm;
	double x0;
	double xn;
	double arreglo[];
	double arreglo1[];
	int tam;

	//Constructores

	//Metodos
	public void Biseccion(){

		Insertaf();
		while (f(a)*f(b)>0){
			a--;
			b++;
		}
	
		do{
		    xm=(a+b)/2;
		    if(f(a)*f(xm)<0)
		    b=xm;
		    else
		    a=xm;
    	}while(Math.abs(a-b)>tol);
		
		System.out.println("La raiz es :"+xm);
			
}

	public void NewtonRhapson(){
		Insertaf();
		Derivada();	
		x0=0;
		do{
			xn=x0-(f(x0)/f1(x0));
			x0=xn;
		}while(Math.abs(xn-x0)>tol );
		System.out.println("La raiz es: "+xn);
}

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