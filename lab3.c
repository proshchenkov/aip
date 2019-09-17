#include <stdio.h>

int main () {
	FILE *example;
	example=fopen("example.txt", "w+");
	int array[10];
	char str[256];
	for(int i=0; i<10; i++){
		scanf("%i", &array[i]);
	}
	for(int i=0;i<10;i++){
		fprintf(example, "%i  ", array[i]);
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
	fprintf(example, "\n%i  ", min);
	fprintf(example, "%i", max);
	rewind(example);
	while(!feof(example)){
		fgets(str, 256,example);
		puts(str);
	}
	fclose(example);
	return 0;
}
