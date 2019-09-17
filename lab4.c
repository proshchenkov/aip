#include <stdio.h>
#include <stdlib.h>

int nod(int x, int y){
	int z;
	while(y!=0){
		z=x%y;
		x=y;
		y=z;
	}
	return x;
}

int main () {
	int x,y;
	scanf("%i", &x);
	scanf("%i", &y);
	x=abs(nod(x,y));
	printf("%i\n", x);
}
