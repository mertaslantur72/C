#include<stdio.h>

struct Araba {
	
	char marka[15];
	char model[15];
	float motorhacmi;
	int beygir;
	
}araba1;


int main() {
	
	struct Araba  araba1 = {"Ford","Mustang",3.0,600};
	
	printf("Arabanin markasi %s, modeli %s, motor hacmi %.2f, gucu %d beygirdir.",araba1.marka,araba1.model,araba1.motorhacmi,araba1.beygir);
	
	
	return 0;
}

/* Bu derste hocan�n compiler � ile bizimki aras�nda bir fark olu�tu�u i�in hocan�n yapt���n� sen yapam�yorsun yani �unu -----> araba1 = {aasafgsfg,adhadh,adfha};
Senin t�pk� 41. derste oldu�u gibi ve bu derste oldu�u gibi tan�mlama yapman gerek. Yani bu dersete ��rendi�in tek �ey yap�n�n alt�na main de kullanaca��n de�i�ken
leri tan�mlamak oldu. AMa bu ne i�e yarar pek de anlam�� de�ilsin. �u anl�k �ylesine bir bilgi i�rte siktir et.*/


