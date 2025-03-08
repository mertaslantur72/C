#include<stdio.h>

void degerdegistir(int a, int b) {
	
	int gecici=a;
	a=b;
	b=gecici;
	
	
	printf("a:%d b:%d\n",a,b);
}



int main() {
	
	int x=5,y=10;
	
	degerdegistir(x,y);
	
	printf("x:%d y:%d",x,y);
	
	return 0;
}

// Yani yazýlacak pek bir þey yok (þu anlýk). Ýsterse daha sonra gider dersi izlersin. 
// A ve B nin deðerlerini deðiþtirmeye çalýþtýk fakat olmadý.
