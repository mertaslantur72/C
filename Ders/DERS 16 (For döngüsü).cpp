#include<stdio.h>


int main() {
	
	
	int i,j;
	
	for(i=0; i<3 ; i++) {
		
	    for(j=0 ; j<3 ;j++){
		
		printf("i:%d j:%d\n",i,j);
	    }	
		
		
	}
		

	
	return 0;
}


/* 
Aga bak burada ilk �nce i =0 diyor d�g��y� ba�lat�yo, sonra j'li d�ng�ye geliyo s�ra ve ba�l�yo j'li d�ng�y� �al��t�rmaya. Tabii o s�rada j'li
d�ng��n�n i�inde i'nin de�eri hala 0. i = 0 iken j'nin d�ng�s� tamamlan�yo ve ard�ndan ba�a, yani i'nin oldu�u d�g�ye geri d�n�yor ve yeni i de�erimiz art�k 1.
ayn� i�lemi i =1 iken yap�yo. Yani i=1 iken j yi bitirene kadar �al��t�r�yor ve tekrar i'ye d�n�yor ve bu i�lem b�yle devam edip gidiyor
*/


