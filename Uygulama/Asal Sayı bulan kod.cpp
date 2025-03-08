#include<stdio.h>


int main() {
	
	int sayi,i;
	int sayac = 0;
	
	printf("Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	
	for(i=2; i<sayi; i++) {
		
		if(sayi%i != 0) {
			
			sayac += 1;
			
		}
		
		
		
	}
	
	if(sayac==(sayi-2)) {
		
		printf("Asaldir");
	}
	
	else {
		printf("Asal degildir");
		
	}
	
	
	return 0;
}
