#include<stdio.h>

int main() {
	
float toplam=0.0;
float sayilar[7];
int i;
	
for(i=0; i<7; i++) {
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%f",&sayilar[i]);
	
}
	
for(i=0; i<7; i++) {
	
	toplam += sayilar[i];
	
	
}	
	
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.2f dir",toplam/7);
	return 0;
}
