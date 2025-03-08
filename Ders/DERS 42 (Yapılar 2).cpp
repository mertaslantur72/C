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

/* Bu derste hocanýn compiler ý ile bizimki arasýnda bir fark oluþtuðu için hocanýn yaptýðýný sen yapamýyorsun yani þunu -----> araba1 = {aasafgsfg,adhadh,adfha};
Senin týpký 41. derste olduðu gibi ve bu derste olduðu gibi tanýmlama yapman gerek. Yani bu dersete öðrendiðin tek þey yapýnýn altýna main de kullanacaðýn deðiþken
leri tanýmlamak oldu. AMa bu ne iþe yarar pek de anlamýþ deðilsin. Þu anlýk öylesine bir bilgi iþrte siktir et.*/


