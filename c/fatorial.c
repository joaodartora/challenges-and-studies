// Program to calculate the factorial of a number.

#include <stdio.h>
#include <math.h>

int main (){

	int factor,number,i;
	factor = 1;

    	printf ("Enter the value to have your factorial calculated: ");
       		scanf ("%d",&number);

	if (number < 0){
		printf ("Number without factorial!\n");
	}
	else {
	factor = 1;
		for (i=1; i <= number; i++){
			factor = (i*factor);
		}
	}

    printf ("The factorial of the number entered is %d\n",factor);
return 0;
}
