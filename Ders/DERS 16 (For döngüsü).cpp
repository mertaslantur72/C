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
Aga bak burada ilk önce i =0 diyor dögüüyü baþlatýyo, sonra j'li döngüye geliyo sýra ve baþlýyo j'li döngüyü çalýþtýrmaya. Tabii o sýrada j'li
döngüünün içinde i'nin deðeri hala 0. i = 0 iken j'nin döngüsü tamamlanýyo ve ardýndan baþa, yani i'nin olduðu dögüye geri dönüyor ve yeni i deðerimiz artýk 1.
ayný iþlemi i =1 iken yapýyo. Yani i=1 iken j yi bitirene kadar çalýþtýrýyor ve tekrar i'ye dönüyor ve bu iþlem böyle devam edip gidiyor
*/


