#include<stdio.h>

struct Student {
	
	char isim[15];
	char soyisim[15];
	int numara;
	
};


int main() {
	
	struct Student people[3];
	int i;
	
	for(i=0; i<3; i++) {
		
		printf("%d inci ogrencinin bilgilerini gir: ",(i+1));
		scanf("%s %s %d",&people[i].isim,&people[i].soyisim,&people[i].numara);
		
	}
	
	for(i=0; i<3; i++) {
		
		printf("%d inci ogrencinin bilgileri %s %s %d\n",(i+1),people[i].isim,people[i].soyisim,people[i].numara);
		
	}
	
	return 0;
}
