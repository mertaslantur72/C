#include<stdio.h>

int main() {
	
/*
TÝP DÖNÜÞÜMLERÝ
Otomatik Dönüþümler
Örneðin bir aritmetik ifadede bütün tipler ayný deðil. Mesela 3.2/2 dediðimiz zaman float ve int bereber oluyor. Burada sonuç ne olacaktýr. 1.6 çünkü otomatik 
bir dönüþüm yapýlýyor. (2 sayýsý 2.0 çevirilip float oluyor aslýnda)

Otomatik Dönüþüm Çizelgesi :

char
short --------> int ---------> float -------> double -------> long
                                                              double
															  
															   
Mesela  int ve double beraberse herkes otomatik olarak doubl a çevirilir. ( Saða doðru öncelik artýyor.) 


Manuel Dönüþümler

Otomatik dönüþümlerin olmadýðý yerlerde kendimiz yapabilriz. 

3.2 sayýsýný int yapmak istersek ------> (int) 3.2 -----> 3 sonucunu  verir. ( Kesirli kýsmý atar)
*/


int x = 3; 
float y = 0.1;
printf("%f\n",x,y);

printf("%f\n",2*4.2+4%2);
printf("%f\n",12.5/2);
printf("%d\n",(int)3.2);
printf("%f\n",(float)3);


	
	
	
	
	
	return 0;
}
