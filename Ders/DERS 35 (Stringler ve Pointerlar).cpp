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

/* Bir pointer a string tanýmlarken pointerin saðýndaki ifadenin baþýna & konulmaz. Tabii saðdaki ifade de [] yoksa. Eðer [] varsa [] içine bir sayý
girme zorunluluðun var. Fakat int de saðdaki ifadenin baþýna & koymak gerekiyor. Aþaðýda kýyaslama örneði koyuyorum, onunla gerekirse oynayarak denemeler yap.

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

// Bunlar deneme baþkanom.

/*
    char yazi[] = "tura";
	
	char *p=yazi;
	
	printf("%s",yazi);
*/	
