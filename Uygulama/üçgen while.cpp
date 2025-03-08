#include<stdio.h>
#include<math.h>


int main() {
	
	
	int a,b,c;
	
	printf("Lutfen kenar uzunlugunu giriniz:");
	scanf("%d",&a);
	
	printf("Lutfen kenar uzunlugunu giriniz:");
	scanf("%d",&b);
	
	printf("Lutfen kenar uzunlugunu giriniz:");
	scanf("%d",&c);
	
	
	do{
		
		if(a==c || a==b || b==c) {
			
			printf("Girdiginiz ucgen bir ikiz kenar ucgendir.");
		}
		
		
		else if(a==b==c) {
			
			printf("Girdiginiz ucgen bir eskenar ucgendir.");
		}
		
		
		else if(sqrt(a*a+b*b)==c || sqrt(b*b+c*c)==a || sqrt(c*c+a*a)==b) {
			
			printf("Girdiginiz ucgen bir dik kenar ucgendir.");
		}
		
		
		else if(a!=b!=c) {
			
			printf("Girdiginiz ucgen bir cesit kenar ucgendir.");
		}
		
		
	}while((fabs(b-c)<a<(b+c)) && (fabs(a-c)<b<(a+c)) && (fabs(a-b)<c<(a+b)));
			
	
	return 0;
}
