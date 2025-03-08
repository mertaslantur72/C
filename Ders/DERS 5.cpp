#include<stdio.h>

int main() {
	
/*
ATAMALAR,ARTIRMA,AZALTMA ÝÞLEMLERÝ :

1_PROBABLY ATAMALAR KONUSU
 
deðiþken(variable) = ifade (expression)
int x = 15;
x = y;
y = x;

Örnek;

int x = 6;
int y = 7;
x = y; (y'nin deðeri x'e atanýyor. x=7, y=7 )
y = x+1 (x+1 hesaplanýyor(8) ve y'ye atýlýyor. x = 7, y =8 )


x = x+1;
Atama durumunda ilk baþta sað taraftaki kýsým hesaplanýr. Sonra atama yapýlýr.

x+1 = 2; ( Bu tür þeyler C de geçerli deðildir. Sol taraftaki deðer saf bir deðiþken olmalý. X gibi y gibi)


2_ARTTIRMA AZALTMA ÝÞLEMLERÝ  	


i = i+1;
Bunun eþiti ayný zamanda i + = 1 (i = i+1 ile ayný þey )
( deðiþken iþlem = ifade )
C'de kolay bir yöntem var.
üstteki iþlem i'yi bir arttýrýr.
i'yi arttýrmak için C'de i++ ve ++i gibi þeyler bulunuyor.
postfix : i++;
prefix :++i;
Arasýndaki fark :

int i =4;
printf("%d",i++);

Ekrana 4 deðerini bastýrýr.Çünkü bu postfix halinde (i++) i'nin arttýrmadan önceki deðerini (4) kullanýyor bir sonraki satýrda arttýrýyor.

printf("%d",++i);

Ekrana 5 deðerini bastýrýr. Çünkü bu prefix halinde (++i) i'nin artmýþ deðerini kullanýyor(5) bir sonraki satýrda arttýrýyor.
i-- ve --i de ayný þekilde çalýþýyor.



(deðiþken iþlem = ifade) biraz açarsak;

i = i % a;
Bu forma sokmaya çalýþalým. i % = a;

Örnek;

i = i * (a+1); eþiti ---->    i * = a+1


ÝÇ ÝÇE ATAMALAR :

i = j = k = 0;
Bu þekilde bir atama varsa en saðdan baþlayarak k'ya 0 atýyor. Yani (k = 0) Daha sonra j'ye k'nýn deðerini atýyor (0) j = 0. Daha sonra i'ye j'nin deðerini
atýyor. i =0 oldu. Sonuç olarak en saðdan baþlayarak yapýlan atamalar sonucunda,

i = 0;
j = 0;
k = 0;

Bu þekilde atamalrda en saðdan baþlayarak iþlemler yapolýr. Ancak programcýlar bunun çok karmaþýk versiyonlarýný terecih etmezler.
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
