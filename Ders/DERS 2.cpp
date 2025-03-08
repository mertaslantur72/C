#include<stdio.h>

int main() {

int a1 = 42;
char b1 = 66;
char b2 = 'B';
float c1 = 4.2;
double d1 = 0.21;

printf("%d %c %d %.3f %f %S \n",a1,b1,b2,c1,d1,"OLACAK BU ÝS BASGAN");

printf("%d byte\n",sizeof(char));
printf("%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(short int));
printf("%d byte\n",sizeof(long int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n",sizeof(double));	
	
/* 
Bu derste format belirleyicileri iþledik ( %d falan filan) char int 
nedir gibi bazý kavramlarý gördük ve %f in %.3f olunca virgülden sonra
3 basamak hassasiyetiyle sýnýrlandýðýný öðrendik. %d'de ise %10d yapýnca
10 birim boþluk býraktýðýný öðrendik.

*/
	
	
	
	
	
	
	
	return 0;
}
