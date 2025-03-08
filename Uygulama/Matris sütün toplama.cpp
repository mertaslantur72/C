#include<stdio.h>

int main() {
	
	
	int matris[3][5];
	int i,j,toplam=0;
	
	for(i=0; i<3; i++) {
		
		for(j=0; j<5; j++) {
			
			printf("Lutfen Sayi Giriniz:");
			scanf("%d",&matris[i][j]);
			
		}
		
	}
	
	
	for(i=0; i<5; i++) {
		
		for(j=0; j<3; j++) {
			
			toplam = (toplam + matris[j][i]);
			
		}
		
		printf("Toplamin Sonucu %d dir\n",toplam);
		toplam=0;		
	}
	
	
	return 0;
}
