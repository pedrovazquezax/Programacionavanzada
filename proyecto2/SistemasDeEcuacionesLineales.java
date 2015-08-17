//Valenzuela Rangel Marisol
//Vázquez Rodríguez Pedro Antonio
//Vega Gutiérrez  Daniel Salvador
//Velasco Casas Diana Laura

class SistemasDeEcuacionesLineales{

	
	public void GaussJordan(){
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
		System.out.println( "Solucion del sistema");
									   for(int k=0;k<n;k++)
           							     {
          								     System.out.println(" X["+(k+1)+"] ="+B[k]);
            								  }
											  

	}

	public void LU(){

		int i,j,k,n;
		double a[][],b[],x[],l[][],y[],u[][],sum;
		n=Teclado.entero("Ingresa el numero de incognitas: ");
		a=new double[n][n];	
		b=new double[n];
		x=new double[n];
		l=new double[n][n];
		y=new double[n];
		u=new double[n][n];
		System.out.println("Ingrese los coeficientes: ");
		for(i=0;i<n;i++){
			for(j=0;j<=n;j++){
				if(j<n){
					a[i][j]=Teclado.Double("Coeficiente ["+i+"]["+j+"]: ");
				}
				else {
					b[i]=Teclado.Double("Termino independiente ["+i+"]: ");
					
				}
			}
		}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(i>j){
					u[i][j]=0.0;
				}
				else if(i==j) {
					l[i][j]=1.0;
				}
				else {
					l[i][j]=0.0;
				}
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						sum=0.0;
						if(i<=j){
							for(k=0;k<n;k++) 
								if(k!=i)
								sum=sum+l[i][k]*u[k][j];
								u[i][j]=a[i][j]-sum;
							}
							else {
								for(k=0;k<n;k++)
									if(k!=j)
										sum=sum+l[i][k]*u[k][j];
									l[i][j]=(a[i][j]-sum)/u[j][j];
								}
							}
						}
						System.out.println("\n L =");
						for(i=0;i<n;i++){
							System.out.print("\n");
							for(j=0;j<n;j++)
								System.out.print("\t"+l[i][j]);
								}
								
								System.out.println("\n U =");
								for(i=0;i<n;i++){
									System.out.print("\n");
									for(j=0;j<n;j++)
										System.out.print("\t"+u[i][j]);
								}

								y[0]=b[0]/l[0][0];
								for(i=1;i<n;i++)
								{
								 sum=0;
								 for(j=0;j<i;j++)
								 {
								 sum=sum+y[j]*l[i][j];
			
								 }
								 y[i]=b[i]-sum;
								}
								System.out.print("\n");
								for(i=0;i<n;i++)
								{
								System.out.println("Y["+(i+1)+"] = "+y[i]);
                			
								}

								x[n-1]=y[n-1]/u[n-1][n-1];
								for(i=n-2;i>=0;i--)
								{
								sum=0;
								for(j=n-1;j>i;j--)
								sum=sum+x[j]*u[i][j];
								x[i]=(y[i]-sum)/u[i][i];

								}

								for(i=0;i<n;i++)
								System.out.println("X["+(i+1)+"] = "+x[i]);

		
        
			
	}
}