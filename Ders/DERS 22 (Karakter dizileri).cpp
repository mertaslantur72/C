#include<stdio.h>

int main() {
	
	char isim[20];
	
	printf("Isminizi girin:");
	
	scanf("%s",isim);
	
	printf("Isminiz girin: %s",isim);
	
	// scanf de bo�luk koyduktan sonra scanf onu okumuyor ve scanf de char t�r�nde & i�aretine gerek yok.
	
	
	return 0;
}

