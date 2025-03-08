#include<stdio.h>

int main() {
	
	int islem;
	int bakiye;
	int tutar;
	bakiye = 1000;
	
	printf("Islemler:\n1_Para Cekme\n2_Para Yatirma\n3_Havale Yapma\n4_Bakiye Sorgulama\n5_Kart Iade\n\n\n");
	printf("Yapmak Istediginiz Islemi Seciniz");
	scanf("%d",&islem);
	
	
	switch(islem) {
		
		case 1:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek Tutari Giriniz:");
			scanf("%d",&tutar);
			
			if (tutar>bakiye) {
				printf("Yetrsiz Bakiye\n");
			}
			
			else {
				bakiye = bakiye - tutar;
				printf("Kalan Bakiyeniz: %d",bakiye);
				break;
			}
		
		
		case 2:
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak Tutari Giriniz:");
			scanf("%d",&tutar);
			bakiye = bakiye + tutar;
			printf("Hesabinizdaki Toplam Para: %d",bakiye);
			break;
			
		
		case 3:
		printf("Bakiyeniz: %d\n",bakiye);
		printf("Havale Yapilacak Tutari Giriniz:");
		scanf("%d",&tutar);
		
		if (bakiye < tutar) {
			printf("Bu Islem Icýn Bakiyeniz Yetersiz\n");
			
		}
			else {
				bakiye = bakiye-tutar;
				printf("Kalan Bakiyeniz: %d",bakiye);
			}
			break;
			
			
		case 4:
		printf("Bakiyeniz: %d",bakiye);
		break;
		
		
		case 5: 
		printf("Kartiniz Iade Edilmistir, Iyi Gunler Dileriz...\n");
		break;	
		
		
		default:
			printf("Bilinmeyen 	Bir Islem Girdiniz");
			break;
	
		}
	
	
		return 0;
}
