// Program to display aligned and tabulated multiplication tables

#include <stdio.h>

int main (){

	int i, j, total;
	for (i = 1;i <= 10; i++){
		printf ("| Multiplication table off %d |\n\n",i);		
		for (j = 1; j <= 10; j++){
			total = (i*j);
			printf ("%d x %d = %d\n",i,j,total);
		}	
		printf ("\n");
	}
return 0;
}
