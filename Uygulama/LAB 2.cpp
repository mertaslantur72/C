#include<stdio.h>


int main() {
	
	int sayi1,sayi2,bolen;
	int toplam=0;
	
	printf("Lutfen ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	printf("Lutfen bolen sayisini giriniz:");
	scanf("%d",&bolen);
	
	
	for(sayi1; sayi1<=sayi2; sayi1++) {
		
		if(sayi1%bolen==0) {
			
			toplam=toplam+1;
		}
		
		else if(sayi1%bolen != 0) {
			
			toplam=toplam;
			
		}
		
	}
	
	printf("Girdiginiz iki sayi arasýinda %d e bolunebilen sayi adedi %d dir.",bolen,toplam);
	
	
	
	return 0;
}
