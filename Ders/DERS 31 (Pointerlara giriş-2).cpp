#include<stdio.h>

int main() {
/*	
	int a=5,*ap;
	float b=3.2,*bp;
	double c=3.143,*cp;
	char d= 'a',*dp;
	
	int sayilar[5] = {1,2,3,4,5};
	int *arrayp;
	
	
	ap=&a;
	bp=&b;
	cp=&c;
	dp=&d;
	
	arrayp=&sayilar[1];
	
	
	printf("%u adresindeki int in degeri %d'dir\n",ap,*ap);
	printf("%u adresindeki float in degeri %f'dir\n",bp,*bp);
	printf("%u adresindeki double in degeri %lf'dir\n",cp,*cp);
	printf("%u adresindeki char in degeri %c'dir\n",dp,*dp);
	printf("%u adresindeki sayilarin elemaninin degeri %d'dir\n",arrayp,*arrayp);
	
	*/
	

int i,j=1;
int *jp1,*jp2 = &j;
	
	jp1=jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp1 + i;
	
	printf("i=%d, j=%d, *jp1=%d, *jp2=%d\n",i,j,*jp1,*jp2);
	
	
	return 0;
}
