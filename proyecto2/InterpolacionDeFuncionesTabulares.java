//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura

	class InterpolacionDeFuncionesTabulares{

	public void Interpolacion(){
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
		if((xk/n)<=0.3){
	
			for (int i=0;i<n;i++)
			if(xk>x[i]&&xk<x[i+1])
				m=i;
			
			k=(xk-x[m])/h;
			yk=y[m]+k*(y[m+1]-y[m])+k*(k-1)*(y[m+2]-2*y[m+1]+y[m])/2;
			
			
			System.out.println("El valor interpolado es"+yk);
			System.out.println("Se uso el metodo de Newton");
			}
			else if((xk/n)>=0.4){
			
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
				
				
 			
	
	}

}