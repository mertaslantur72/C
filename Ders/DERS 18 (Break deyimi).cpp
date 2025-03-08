#include<stdio.h>


int main() {
	
	int toplam=0;
	
	int i;
	
	int sayi;
	
	for(i=0; true; i++) {
		
		printf("Sayiyi giriniz; (Cýkmak icin -1 e basiniz)");
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
Sen -1 girene kadar girdiðin tüm sayýalrý toplayan programin kodlari
*/
