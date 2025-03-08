#include<stdio.h>

/* BOOL VERÝTÝPÝ (TRUE YA DA FALSE)

Mantýksal ifadelerde 0 olmaya bütün sayýlar true kabul ediliyor. 0 ise false.

Mantýksal Oparotorler
<--------> küçük müdür. a<b þekline
>--------> büyük müdür. a>b þeklinde
<= ------> küçük ya da eþit midir. a<=b þeklinde
>= ------> büyük ya da eþit midir. a>=b þeklinde
== ------> eþit midir. a==b þeklinde
!= ------> eþit deðil midir. a!=b þekline

Mantýksal Baðlaçlar.
Birçok mantýksal ifadeyi baðlayan araçlardýr.

&& ------> mantýksal (and) (ve) baðlacýdýr. true&&false&&true gibi baðlanabilri. && olan cümlelerin true olmasý için hepsinin true olmasý lazým. false olmicak
// ------> mantýksal (or) (ya da) baðlacýdýr. true// true//false gibi baðlanabilir. // olduðu cümlelerin true olmasý için 1 tane true olmasý yeterlidir.
! -------> matýksal (not) (deðili) ifadesidir. true olaný fale, false olaný true yapar. örneðin !true ---->false

Þartlý cümleler 

a = x > y ? X: y;  ------>  Diyorkine x büyük y ise a=x oluyor deðilse a=y oluyor.

Birkaç Alýþtýrma;
	
	int a = 40;
	int b = 41;
	
	a > b; ----->  false
	a < b; -----> true
	a >= b; ----> false
	a <= b; ----> true
	a != b; ----> true
	a == b; ---->false
	
	
	int a = 40;
	int b = 50;
	int c = 60;
	int d = 70;
	
	a > c && c <= d && ( a > b // b < d ) -----> ilk önce parantez içindeki iþlemi yapýyorsun ardýndan kalan iþlemleri bool cebirine göre çöz.
	!(a >= d )  */
	
	int main() {
	
	int a,b=20, c=30;
	
	a = b<c ? b: c;
	printf("%d",a);
	 
	
	
	
	
	
	
	
	
	
	
	return 0;
}	


