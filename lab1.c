#include <stdio.h>

int main () {
	int a;
	float d, e1, e2;
	printf("Vvedite celoe chislo ");
	scanf("%i", &a);
	printf("Vvedite drobnoe chislo ");
	scanf("%f", &d);
	e1=a*d;
	printf("Umn %f", e1);
	e2=a/d;
	printf("\nDel %f", e2);
}
