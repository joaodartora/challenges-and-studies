// Cast modelers usage example

#include <stdio.h>

int main(){
	
	float num_real;
	int x=1, y=2, z=1;
	
	num_real= (x/2 + y/2 + z/2);
	printf ("Case 1: %f\n", num_real);
	
	num_real= ((float)x/2 + y/2 + z/2);
	printf ("Case 2: %f\n", num_real);
	
	num_real= ((float)x/2 + (float)y/2 + (float)z/2);
	printf ("Case 3: %f\n", num_real);
	
	num_real= (x/2.0 + y/2.0 + z/2.0);
	printf ("Case 4: %f\n", num_real);

	return 0;

}
