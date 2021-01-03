#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void square(double a[], int num) {
	int i;
	
	for (i = 0; i < num; i++)
		a[i] *= a[i];
}

int main (void) {
	int *p;
	char *str;
	double *data;
	
	int num = 10;
	p = &num;
	printf("%d\n", *p);
	
	str = (char *) malloc(100 * sizeof(char));
	strcpy(str, "hello");
	printf("%s\n", str);
	
	square(data, 5);

	return 0;
}