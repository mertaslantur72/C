#include<stdio.h>

int main() {
	
int bakiye = 1000;
int islem;
int tutar;

	
printf("Lutfen yapilacak islemi seciniz\n\n\n");
printf("1_PARA CEKME\n2_PARA YATIRMA\n3_HAVALE YAPMA\n4_BAKIYE SORGULAMA\n");
scanf("%d",&islem);

switch(islem) {
	
	case 1:
		printf("Bakiyeniz %d TL\n Lutfen cekmek istediginiz tutari giriniz:",bakiye);
		scanf("%d",&tutar);
		
		if(tutar>bakiye) {
			printf("Yetersiz bakiye!");
		}
		bakiye = bakiye - tutar;
		printf("Kalan bakiyeniz %d TL Iyi gunler...",bakiye);
		
		break;
		
	case 2:
		printf("Bakiyeniz %d TL\n Lutfen yatırmak istediginiz tutari giriniz:",bakiye);
		scanf("%d",&tutar);
		
		bakiye = bakiye + tutar;
		printf("Bakiyeniz %d TL Iyi gunler...",bakiye);
		
		break;
		
	case 3:
		printf("Bakiyeniz %d TL\n Lutfen havale yapmak istediginiz tutari giriniz:",bakiye);
		scanf("%d",&tutar);
		
		if(tutar>bakiye) {
			printf("Yetersiz bakiye!");
		}
		bakiye = bakiye - tutar;
		printf("Kalan bakiyeniz %d TL Iyi gunler...",bakiye);
		
		break;
		
	case 4:
		printf("Bakiyeniz %d TL",bakiye);
		
		break;
		
	
	
}
	
	
	return 0;
}
