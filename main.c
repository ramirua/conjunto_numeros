#include <stdio.h>
#include <stdlib.h>



int main()
{
	int n,i,c, num=0, negativo=0, par=0,impar=0,cant=0, total=0, mayor=-9999, menor=9999 ;
	float por, promedio;
	printf(" total de numeros del conjunto?: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("\n\t ingrese un numero: ");
		scanf("%d",&c);
		if(c>0)
		{
				printf("\n el numero es positivo");
				num=num+1; //contador de positivos
		}
		else
		{
			if(c<0)
			{
				printf("\n el numero es negativo");
			    negativo=negativo+1;//contador de negativos
			}
		
		 }
		 
		 if(c%2==0)
		 {
		 	printf("\n el numero es par");
		 	par=par+1;//contador para los pares
		 }
		 else
		 {
	   	   printf("\n el numero es impar");
		   impar=impar+1;
		 }
		  
	
		 //cantidad de numeros entre -30 y 30
		  if(c>=-30 && c<31)
		  {
		  	cant=cant+1; //contador de la cantidad de numeros
		  }
		    
		total=total+c; // acumulador de todos los numeros ingresados
	
	
		//calculo de mayor y menor
	    if(c>mayor)
		{
			mayor=c;
		}	
		 
		  if(c<menor)
		{
			menor=c;
		}	  
	}
		 //los promedios y los porcentajes se calculan fueran de los ciclos 
		 //porcentaje de negativos
		   por=(negativo*100)/n;
		   
		// calculo de promedio
		promedio=(total/n);
	
	printf("\n\n El porcentaje de numeros negativos es: %.2f %",por);
	printf("\n La cantidad de numeros entre -30 y 30 es: %d",cant);
    printf("\n El promedio de numeros es: %.2f",promedio);
    	printf("\n El numero es mayor es: %d", mayor);
    	printf("\n El numero es menor es: %d", menor);
	return 0;
}
