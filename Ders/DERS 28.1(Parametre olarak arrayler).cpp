#include<stdio.h>

int fact(int matris[],int);


int main() {
	
	int dizi[5] = {1,2,3,4,5};
	
	printf("%d",fact(dizi,5));
	
	return 0;
}


int fact(int matris[],int size) {
	
	int carpim=1;
	
	for(int i=0; i<size; i++) {
		
		
		carpim *= matris[i];
	}
	
	
	return carpim;
}
