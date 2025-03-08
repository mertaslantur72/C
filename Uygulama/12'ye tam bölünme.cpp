#include<stdio.h>


int main() {
	
	
	
	int sayi,adet=0;
	
	for(sayi=1 ; sayi<=100 ; sayi++) {
		
		if ((sayi%3==0) && (sayi%4==0)) {
			printf("%d\n",sayi);
			adet++;
		}
		
		
		
		
	}
	
	printf("\n 12 ye bolunebilen sayi adedi %d",adet);
	
	
	
	
	
	
	return 0;
}
