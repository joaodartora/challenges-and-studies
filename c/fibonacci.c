// Program to calculate Fibonacci sequence terms

#include <stdio.h>

int main (){

	int n_ter, n1, n2, i, aux;
	n1 = 1;
	n2 = 1;

    	printf ("Enter how many terms to show: ");
       		scanf ("%d",&n_ter);
	for (i = 1;i <= n_ter; i++){
		if (i == 1 || i == 2){
			printf ("1\n");
		}
		else {
			aux = n1 + n2;
			printf ("%d\n",aux);
			n2 = n1;
			n1 = aux;
		}
	}
return 0;
}
