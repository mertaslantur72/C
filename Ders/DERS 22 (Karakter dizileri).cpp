#include<stdio.h>

int main() {
	
	char isim[20];
	
	printf("Isminizi girin:");
	
	scanf("%s",isim);
	
	printf("Isminiz girin: %s",isim);
	
	// scanf de boþluk koyduktan sonra scanf onu okumuyor ve scanf de char türünde & iþaretine gerek yok.
	
	
	return 0;
}

