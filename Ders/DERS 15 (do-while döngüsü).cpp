#include<stdio.h>


int main() {
	
/*	
	int n = 10;
	
	do {
		
		printf("%d\n",n);
		
		
		n--;
				
	}
	
	while(n>0);

	return 0;
	
}
*/


// 1234 sayýsýnýn önce rakamlarý toplamýný versin sonra kaç basamklý olduðunu söylesin //

int n,hane=0,toplam=0;

printf("Sayiyi giriniz:");
scanf("%d",&n);


do {
	
	toplam +=(n%10);
	
	hane ++;
	
	n = n/10;	
	
	
}

while(n>0);

printf("Rakamlari toplami %d %d haneli",toplam,hane);


return 0;

}


/*
 toplam =+ (n%10) komutunu anlatayým öncelikle.
Bu komut toplam deðiþkenine her çalýþtýðýnda n deðerinin 10 ile bölümünden kalanýný yazacak.  yani birler basamaðýný.
do döngüsünün sonunda ise n sayýsýný 10'a bölerek sayýnýn bir önceki birler basamðýný silmiþ olacaðýz. ( int deðer olduðu için deðer virgüllü olamaz.)
while (n >0) konutu ise n deðerinin son basamaðýna kadar yani her basamak için 1 kere çalýþtýrmýþ olacak.
baþtaki toplam komutu bu sebepten dolayý her çalýþtýðýnda toplam deðerini n sayýsýnýn birler basamðý kadar arttýrmýþ olacak.

adým adým 1234 sayýsý için uygulamasý
1. n 10/a bölünüp kalaný alýndý sonuç 4 - toplam sayýsý 0 iken 4 eklendi - hane deðeri 1 arttýrýldý - n sayýsý 10'a bölünüp 123 sayý oldu.

2. n bu sefer 123 deðeri olarak iþlem görüyor- 123 10'a bölünüp kalaný alýndý sonuç 3 - toplam sayýsý 4 iken 3 eklendi sonuç 7 - hane deðeri 1 iken 1 daha arttý sonuç 2 - n sayýsý 10'a bölündü sonuç 12

3. n=12 deðeri 10'a bölünüp kalaný alýndý sonuç 2 - 7 olan toplam deðerini 2 eklendi sonuç 9 - hane deðerine 1 daha eklendi sonuç 3 - n sayýsý 10'a bölündü  sonuç 1

4 n=1 deðeri 10'a bölünüp kalaný alýndý sonuç 1 - 9 olan toplam deðerine 1 daha eklendi sonuç 10 - hane derðerine 1 daha eklendi sonuç 4 n sayýsý 10'a bölündü sonuç 0 
while negeatif oldu döngü bitti.

anlatabildiysem ne mutlu bana.
*/












