//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura
import java.io.*;
import java.lang.Math;
class Metodos{

	//Atributos
	private Funciones func;
	private Funciones fun;


	//Constructores
	public Metodos(){
		func=new Funciones();
		fun=new Funciones();
	}

	//Metodos
	public void Biseccion(){

		
		double tol;
		double a;
		double b;

		fun.Insertaf();
		tol=Teclado.entero("Ingresa la tolerancia deseada");
		a=Teclado.entero("Ingresa \"a\" ");
		b=Teclado.entero("Ingresa \"b\" ");

		
		while (fun.f(a)*fun.f(b)>0){
			a=Teclado.entero("Ingresa \"a\" valida");
			b=Teclado.entero("Ingresa \"b\" valida ");
		}
	
		
		
		System.out.println("La raiz es :"+ObtenerRaiz(a,b,tol));
			
}

	public void NewtonRhapson(){
		
		double tol;
		double x0;
		func.Insertaf();
		func.Derivada();	
			tol=Teclado.entero("Ingresa la tolerancia deseada");
			x0=Teclado.entero("Ingresa x0");
	
		
		System.out.println("La raiz es: "+ObtenerRaiz(x0,tol));
}
	public void Gauss(){
		int n,a,b;

		double A[][],B[],cte,aux;
		n=Teclado.entero("Ingrese el numero de ecuaciones del sistema: ");
		A=new double[n+1][n+1];	
		B=new double[n+1];
		System.out.println("Ingrese los coeficientes:");
		for(a=0;a<n;a++){
			for(b=0;b<n;b++){
			A[a][b]=Teclado.Double("Coeficiente ["+(a+1)+"]["+(b+1)+"]:" );
		}
		B[a]=Teclado.Double("Termino independiente ["+(a+1)+"]:" );
		}	
		
		try{
			FileWriter fw= new FileWriter("Matriz.txt");

			fw.write("\n");
			
							for(a=0;a<n;a++) 
					  		{
   								  for(b=0;b<n;b++)
 								   {
                                     fw.write("\t"+A[a][b]);
                                     
       							 
   									 }
   									 fw.write(" = "+B[a]);
								 
							 	 fw.write("\n");
							 }
					   		 fw.write("\n");
					   		 for(int i=0;i<n;i++){
  									     
  			if (A[i][i]==0){
  				
  				for(int s=i+1;s<=n;s++){
					if (A[s][i]!=0){
						aux=A[i][s-1];
						A[i][s-1]=A[i+1][s-1];
						A[i+1][s-1]=aux;
						aux=B[i];
						B[i]=B[i+1];
						B[i+1]=aux;
					}      
				}
			}
			cte=A[i][i];
			for(int j=0;j<n;j++)
			{
				A[i][j]=A[i][j]/cte;
			}
			B[i]=B[i]/cte;

					 	 for(int o=0;o<n;o++){
					 	 	for(int j=0;j<n;j++){
					 	 		fw.write("\t"+A[o][j]);
					 	 		
                        }
                        
                        fw.write("\t"+B[o]);
                        fw.write("\n");
                        
                    }
                    fw.write("\n");

			for(int j=i+1;j<n;j++){
				cte=A[j][i];
				for(int k=0;k<n;k++){
					A[j][k]=A[j][k]-cte*A[i][k];
				}     
				B[j]=B[j]-cte*B[i];
			}
		}
		for(int i=n;i>=1;i--){
			for(int j=i-1;j>=0;j--){
				cte=A[j][i];
				A[j][i]=A[j][i]-cte*A[i][i];
				B[j]=B[j]-cte*B[i];
				 }
				}	

		fw.write("\nSolucion del sistema");
									   for(int k=0;k<n;k++)
           							     {
           							     	fw.write("\n X["+(k+1)+"] ="+B[k]);
          								  
            								  }
			
			
				fw.close();
		}
		catch(IOException e){
		System.out.println("Error"+e);
		}
		
	
}
	public void Lagrange(){
	int m=0;
		int n;
		double x[],y[],k,h,xk,yk,X,Y=0.0,aux=0.0;
		n=Teclado.entero("De que tamano quieres el arreglo: ");
		y=new double[n];
		x=new double[n];
		for(int i=0;i<n;i++){
			x[i]=Teclado.Double("Dame el valor de X["+i+"]: ");
			y[i]=Teclado.Double("Dame el valor de Y["+i+"]: ");
		}
		h=x[1]-x[0];
		xk=Teclado.Double("Que punto quieres interpolar: ");
		for(int i=0;i<n;i++){
				aux=y[i];
				for(int j=0;j<n;j++)
				if (j!=i)
				aux*=(xk-x[j])/(x[i]-x[j]);
				Y+=aux;
			}

			System.out.println("El resultado es "+Y);
			System.out.println("Se uso el metodo de Lagrange");
}
	public double ObtenerRaiz(double a,double b,double tol){
		double xm;
		do{
		    xm=(a+b)/2;
		    if(fun.f(a)*fun.f(xm)<0)
		    b=xm;
		    else
		    a=xm;
    	}while(Math.abs(a-b)>tol);
    	return xm;
	
}	
	public double ObtenerRaiz(double x0,double tol){
	double xn;
	double df;
	Helper h= new Helper();
	try{
		h.ValidaDf(func.f1(x0));
	}
		catch(CustomException e){
			e.printStackTrace();
		}

		do{
			xn=x0-(func.f(x0)/func.f1(x0));
			x0=xn;
		}while(Math.abs(xn-x0)>tol );
	
		return xn;
}	

}