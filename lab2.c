#include <stdio.h>

int main () {
	int array[10];
	for(int i=0; i<10; i++){
		scanf("%i", &array[i]);
	}
	int min=array[0];
	int max=array[0];
	for(int i=0; i<10; i++){
		if(min>array[i]){
			min=array[i];
		}
		if(max<array[i]){
			max=array[i];
		}
	}
	printf("max=%i", max);
	printf("\nmin=%i", min, "\n");
}
