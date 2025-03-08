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
Bu örnekte anlamak için biraz kafanı yorman lazım mrq. Bak şimdi: dönngüye dahil olmayn ilk ve 2. sayıyı bastırıyorsun, ardından döngüyü başlatıyorsun ve
bir döngü değişkeni tanımlayıp değişkenin kurallarını belirliyorsun. Şimdi sıra geldi dögünün içindeki mantıya. temp diye bir değişken tanımlıyorsun ve bu temp
ikinci sayıya eşit yapıyorsun. Ardından ikinci sayıyı ilk sayı ile toplayıp ikinci sayıya eşitliyorsun (ikincisayi += ilksayi). Bu işlemin ardından artık senin
ikinci sayın ilk sayı ile ikincinin toplamına eşit. Ardından ilk sayıyı temp e eşitleyip ikinci sayıyı basıyorsun. Burada benim anladığım galiba pc bir önceki
döngüdeki ilk ve 2. sayı bilgilerini unutmuyor. Yani sıra 2. DÖNGÜYE gelice bir önceki döngüden ilk ve 2. sayı bilgilerini çekebiliyor. Tbii hatırlatmakta fayda var ki
bu benim şahsi yorumum. ama muktemelen böyledir herhaldemsince*/
