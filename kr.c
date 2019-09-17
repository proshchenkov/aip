#include <stdio.h>

float srarif(int a, int array[2][7]){
	/*
	 *Raschet srednego arifmeticheskogo
	 */
	float s;
	for(int j=0;j<2;j++){
		s+=array[j][a];
	}
	return s/2;
}

int main () {
	int array[2][7];
	int a, k;
	float s[k];
	FILE *file1=fopen("file1.txt", "w+");
	FILE *file2=fopen("file2.txt", "w+");
	//CHtenie massiva s klaviatury
	printf("Vvedite ehlementy massiva \n");
	for(int i=0;i<2;i++){
		for(int j=0;j<7;j++){
			scanf("%i", &array[i][j]);
		}
	}
	printf("Skol'ko raz vy hotite poschitat' srednee arifmeticheskoe ");
	scanf("%i", &k);
	//Vyvod informacii ob oshibke
	if(k>6){
		printf("error: k>6");
		return 0;
	}
	for(int i=0;i<k;i++){
		printf("V kakoj stroke vy hotite poschitat' srednee arifmeticheskoe ");
		scanf("%i", &a);
		fprintf(file2, "%f  ", srarif(a, array));
		fprintf(file2, "%i\n", a);
	}
	//Pechat' massiva v fajl
	for(int i=0;i<7;i++){
		for(int j=0;j<2;j++){
			fprintf(file1, "%i  ", array[j][i]);
		}
		fprintf(file1, "\n");
	}
	return 0;
}
