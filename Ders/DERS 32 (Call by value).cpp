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

// Yani yaz�lacak pek bir �ey yok (�u anl�k). �sterse daha sonra gider dersi izlersin. 
// A ve B nin de�erlerini de�i�tirmeye �al��t�k fakat olmad�.
