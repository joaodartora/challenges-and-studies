// File opening example

#include <stdio.h>
#include <string.h>
#define NUMEL 5

int main (){
	FILE *arc;
	char name[16];
	int vector[NUMEL];
	int count, value;
	printf ("Enter file name: ");
		scanf ("%s", name);
	if (!(arc = fopen(name,"wb")))
		printf ("Error opening file!\n");
	else {
		printf ("Between %d integer values\n", NUMEL);
			for (count = 0; count < NUMEL; count++){
				scanf ("%d", &value);
				if (fwrite(&value, sizeof(value), 1, arc) != 1)
					printf ("Error writing file!\n");
			}
	fclose(arc);
	}
return 0;
}
