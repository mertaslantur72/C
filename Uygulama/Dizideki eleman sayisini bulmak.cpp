#include<stdio.h>


int main() {
	
	
	int i,n,x,p,sayac=0;
	
	printf("Diziniz kac elemanli olacaktir: ");
	scanf("%d",&x);
	
	int dizi[x];
	
	
	
	for(i=0; i<x; i++) {
		
		printf("Lutfen %d elemanli dizinizin %d'inci elemanini giriniz:",x,i+1);
		scanf("%d",&p);
		
		dizi[i] = p;
		
	}
	
	
	
	printf("Hangi sayinin adetini ogrenmek istiyorsunuz: ");
	scanf("%d",&n);
	
	
	
	for(i=0; i<10; i++) {
		
		if(dizi[n] == dizi[i]) {
			
			
			sayac += 1;
			
		}
		
		
	}
	
	printf("Bu dizide %d tane %d vardir.",sayac,n);
	
	return 0;
}
