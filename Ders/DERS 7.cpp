/*
Giriþ Çýkýþ Fonksiyonalrý
printf ve scanf

Float bir deðer olan x'i ekrana bastýrmak için printf("%f",x); yapýyoruz. Benzer bir þekilde, float olan bir x tanýmlayýp 
daha sonra bu deðeri kullanýcýdan almak istersek de scanf("%f",&x); þeklinde yazýyoruz. "&" iþareti x'e kullanýcýdan gelen deðeri
atadýðýmýzý gösteriyor. Diðer format belirleyicileri printf ile aynýdýr.

*/

#include<stdio.h>
#define PI 3.14

int main() {
	
int yaricap;
float hacim;

printf("Kurenin yaricapini giriniz:  ");
scanf("%d",&yaricap);

hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
printf("Kurenin hacmi %f 'dir'",hacim);


// Yuakrýda hacim buldun þimdi kendiliðinden alan bul //

int tabanuzunlugu;
int yukseklik;
float ucgeninalani;

printf("UCGENIN TABAN UZUNLUGUNU GIRINIZ:\n ");
scanf("%d",&tabanuzunlugu);

printf("UCGENIN YUKSEKLIGINI GIRINIZ:\n ");
scanf("%d",&yukseklik);

ucgeninalani = ((tabanuzunlugu*yukseklik)/2);

printf("UCGENINIZIN ALANI %f 'DIR'",ucgeninalani);
	
	
	return 0;
}
