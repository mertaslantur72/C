#include<stdio.h>

int main() {

int a1 = 42;
char b1 = 66;
char b2 = 'B';
float c1 = 4.2;
double d1 = 0.21;

printf("%d %c %d %.3f %f %S \n",a1,b1,b2,c1,d1,"OLACAK BU �S BASGAN");

printf("%d byte\n",sizeof(char));
printf("%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(short int));
printf("%d byte\n",sizeof(long int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n",sizeof(double));	
	
/* 
Bu derste format belirleyicileri i�ledik ( %d falan filan) char int 
nedir gibi baz� kavramlar� g�rd�k ve %f in %.3f olunca virg�lden sonra
3 basamak hassasiyetiyle s�n�rland���n� ��rendik. %d'de ise %10d yap�nca
10 birim bo�luk b�rakt���n� ��rendik.

*/
	
	
	
	
	
	
	
	return 0;
}
