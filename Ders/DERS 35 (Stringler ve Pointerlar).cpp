#include<stdio.h>

int benimstrlen(char *p) {
	
	int uzunluk=0,i=0;
	
	for(; p[i] != '\0'; i++) {
		
		uzunluk++;
	}
	
	return uzunluk;
}


int main() {

	char yazi[] = "Tura";
	printf("%d",benimstrlen(yazi));

	
	
	return 0;
}

/* Bir pointer a string tan�mlarken pointerin sa��ndaki ifadenin ba��na & konulmaz. Tabii sa�daki ifade de [] yoksa. E�er [] varsa [] i�ine bir say�
girme zorunlulu�un var. Fakat int de sa�daki ifadenin ba��na & koymak gerekiyor. A�a��da k�yaslama �rne�i koyuyorum, onunla gerekirse oynayarak denemeler yap.

char yazi[] = "TURA";
char *p = yazi;
printf("%c\n",*p);


int adam = 20;
int *p1 = &adam;
printf("%d",*p1);
*/


/*	char yazi[] = "tura";
	
	char *p=yazi;
	
	printf("%s",(p+1));
	
*/	

// Bunlar deneme ba�kanom.

/*
    char yazi[] = "tura";
	
	char *p=yazi;
	
	printf("%s",yazi);
*/	
