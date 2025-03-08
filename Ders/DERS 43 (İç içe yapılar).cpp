#include<stdio.h>
#include<string.h>

struct Address {
	
	char mahalle[15];
	char cadde[20];
	char sokak[15];
	
};

struct Student {
	
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	struct Address konum;
	
};

int main() {
	
	struct Student student1;
	
	strcpy(student1.isim,"Mert");
	strcpy(student1.soyisim,"Aslanturk");
	
	student1.numara = 407124;
	student1.yas = 21;
	
	strcpy(student1.konum.mahalle,"Merkez");
	strcpy(student1.konum.cadde,"Merinos caddesi");
	strcpy(student1.konum.sokak,"49'uncu sokak");
	
	printf("%s %s %d %d %s %s %s",student1.isim,student1.soyisim,student1.numara,student1.yas,student1.konum.mahalle,student1.konum.cadde,student1.konum.sokak);
	
	return 0;
}
