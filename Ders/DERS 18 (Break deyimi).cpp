#include<stdio.h>


int main() {
	
	int toplam=0;
	
	int i;
	
	int sayi;
	
	for(i=0; true; i++) {
		
		printf("Sayiyi giriniz; (C�kmak icin -1 e basiniz)");
		scanf("%d",&sayi);
		
		
		if(sayi == -1) {
			
			break;
		}
		toplam += sayi;
	}
	printf("%d",toplam);
	
	return 0;
}



/*
Sen -1 girene kadar girdi�in t�m say�alr� toplayan programin kodlari
*/
