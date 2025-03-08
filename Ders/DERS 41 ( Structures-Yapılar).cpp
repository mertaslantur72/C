#include<stdio.h>

struct Student {
	
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
	
};


int main() {
	
	struct Student mert = {"Mert","Aslanturk",407124,21};
	
	printf("%s %s %d %d",mert.isim,mert.soyisim,mert.numara,mert.yas);
	
	
	return 0;
}
