#include<stdio.h>

int main() {
	
/*
ATAMALAR,ARTIRMA,AZALTMA ��LEMLER� :

1_PROBABLY ATAMALAR KONUSU
 
de�i�ken(variable) = ifade (expression)
int x = 15;
x = y;
y = x;

�rnek;

int x = 6;
int y = 7;
x = y; (y'nin de�eri x'e atan�yor. x=7, y=7 )
y = x+1 (x+1 hesaplan�yor(8) ve y'ye at�l�yor. x = 7, y =8 )


x = x+1;
Atama durumunda ilk ba�ta sa� taraftaki k�s�m hesaplan�r. Sonra atama yap�l�r.

x+1 = 2; ( Bu t�r �eyler C de ge�erli de�ildir. Sol taraftaki de�er saf bir de�i�ken olmal�. X gibi y gibi)


2_ARTTIRMA AZALTMA ��LEMLER�  	


i = i+1;
Bunun e�iti ayn� zamanda i + = 1 (i = i+1 ile ayn� �ey )
( de�i�ken i�lem = ifade )
C'de kolay bir y�ntem var.
�stteki i�lem i'yi bir artt�r�r.
i'yi artt�rmak i�in C'de i++ ve ++i gibi �eyler bulunuyor.
postfix : i++;
prefix :++i;
Aras�ndaki fark :

int i =4;
printf("%d",i++);

Ekrana 4 de�erini bast�r�r.��nk� bu postfix halinde (i++) i'nin artt�rmadan �nceki de�erini (4) kullan�yor bir sonraki sat�rda artt�r�yor.

printf("%d",++i);

Ekrana 5 de�erini bast�r�r. ��nk� bu prefix halinde (++i) i'nin artm�� de�erini kullan�yor(5) bir sonraki sat�rda artt�r�yor.
i-- ve --i de ayn� �ekilde �al���yor.



(de�i�ken i�lem = ifade) biraz a�arsak;

i = i % a;
Bu forma sokmaya �al��al�m. i % = a;

�rnek;

i = i * (a+1); e�iti ---->    i * = a+1


�� ��E ATAMALAR :

i = j = k = 0;
Bu �ekilde bir atama varsa en sa�dan ba�layarak k'ya 0 at�yor. Yani (k = 0) Daha sonra j'ye k'n�n de�erini at�yor (0) j = 0. Daha sonra i'ye j'nin de�erini
at�yor. i =0 oldu. Sonu� olarak en sa�dan ba�layarak yap�lan atamalar sonucunda,

i = 0;
j = 0;
k = 0;

Bu �ekilde atamalrda en sa�dan ba�layarak i�lemler yapol�r. Ancak programc�lar bunun �ok karma��k versiyonlar�n� terecih etmezler.
*/  
 
 
 int x = 5;
 int y = 7;
 int a = 2;
 
 x = y;
 y = x+a+1;
 
 //printf("x:%d\ny:%d\na:%d\n",x,y,a);
 
 x = 4;
 y = 5;
 a = 6;
 
 printf("x:%d\n y:%d\n a:%d\n",--x,++y,a++);
 printf("x:%d\n y:%d\n a:%d\n",x,y,a);
 printf("x:%d\n y:%d\n a:%d\n",x--,--y,a--);
 	
	
	return 0;
	
	}
