#include<stdio.h>


int main() {
	
	
	int ilksayi = 1;
	int ikincisayi = 1;
	int i;
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	
	for(i=0; i<15; i++) {
		
		
	int	temp = ikincisayi;
	
	ikincisayi += ilksayi;
	
	ilksayi = temp; 
		
	printf("%d\n",ikincisayi);		
		
		
	}
	
	return 0;
}


/*
Bu �rnekte anlamak i�in biraz kafan� yorman laz�m mrq. Bak �imdi: d�nng�ye dahil olmayn ilk ve 2. say�y� bast�r�yorsun, ard�ndan d�ng�y� ba�lat�yorsun ve
bir d�ng� de�i�keni tan�mlay�p de�i�kenin kurallar�n� belirliyorsun. �imdi s�ra geldi d�g�n�n i�indeki mant�ya. temp diye bir de�i�ken tan�ml�yorsun ve bu temp
ikinci say�ya e�it yap�yorsun. Ard�ndan ikinci say�y� ilk say� ile toplay�p ikinci say�ya e�itliyorsun (ikincisayi += ilksayi). Bu i�lemin ard�ndan art�k senin
ikinci say�n ilk say� ile ikincinin toplam�na e�it. Ard�ndan ilk say�y� temp e e�itleyip ikinci say�y� bas�yorsun. Burada benim anlad���m galiba pc bir �nceki
d�ng�deki ilk ve 2. say� bilgilerini unutmuyor. Yani s�ra 2. D�NG�YE gelice bir �nceki d�ng�den ilk ve 2. say� bilgilerini �ekebiliyor. Tbii hat�rlatmakta fayda var ki
bu benim �ahsi yorumum. ama muktemelen b�yledir herhaldemsince*/
