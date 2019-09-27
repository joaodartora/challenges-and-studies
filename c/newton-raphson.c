// Program to calculate root of 2 with Newton-Raphson algorithm.

#include <stdio.h>
#include <math.h>

int main (){

	int cont, iter;
	double initial, x1, aprox;

    	printf ("Enter the number of iterations: ");
       		scanf ("%d",&iter);
        printf ("Enter the approximation number: ");
            scanf ("%lf",&initial);
            x1 = initial;
	for (cont = 1;cont <= iter; cont++){
            aprox = initial - ((initial*initial)-2)/(2*initial);
            initial = aprox;
		}
		printf ("sqrt(2): %1.15f\nValor Aproximado: %1.15f\n", sqrt(2),aprox);
return 0;
}
