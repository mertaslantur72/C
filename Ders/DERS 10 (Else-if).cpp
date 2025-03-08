#include<stdio.h>

/* BOOL VER�T�P� (TRUE YA DA FALSE)

Mant�ksal ifadelerde 0 olmaya b�t�n say�lar true kabul ediliyor. 0 ise false.

Mant�ksal Oparotorler
<--------> k���k m�d�r. a<b �ekline
>--------> b�y�k m�d�r. a>b �eklinde
<= ------> k���k ya da e�it midir. a<=b �eklinde
>= ------> b�y�k ya da e�it midir. a>=b �eklinde
== ------> e�it midir. a==b �eklinde
!= ------> e�it de�il midir. a!=b �ekline

Mant�ksal Ba�la�lar.
Bir�ok mant�ksal ifadeyi ba�layan ara�lard�r.

&& ------> mant�ksal (and) (ve) ba�lac�d�r. true&&false&&true gibi ba�lanabilri. && olan c�mlelerin true olmas� i�in hepsinin true olmas� laz�m. false olmicak
// ------> mant�ksal (or) (ya da) ba�lac�d�r. true// true//false gibi ba�lanabilir. // oldu�u c�mlelerin true olmas� i�in 1 tane true olmas� yeterlidir.
! -------> mat�ksal (not) (de�ili) ifadesidir. true olan� fale, false olan� true yapar. �rne�in !true ---->false

�artl� c�mleler 

a = x > y ? X: y;  ------>  Diyorkine x b�y�k y ise a=x oluyor de�ilse a=y oluyor.

Birka� Al��t�rma;
	
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
	
	a > c && c <= d && ( a > b // b < d ) -----> ilk �nce parantez i�indeki i�lemi yap�yorsun ard�ndan kalan i�lemleri bool cebirine g�re ��z.
	!(a >= d )  */
	
	int main() {
	
	int a,b=20, c=30;
	
	a = b<c ? b: c;
	printf("%d",a);
	 
	
	
	
	
	
	
	
	
	
	
	return 0;
}	


