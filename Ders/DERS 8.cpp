#include<stdio.h>
#include<math.h>

int main() {
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 tane tam sayi giriniz\n");
	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik = ((a+b+c+d+e)/5.0);
	printf("Girdiginiz sayilarin aritmetik ortalamasi %.3f",aritmetik);
	
	// Burada farkýlý bir uygulamaya geçiyoruz.// 
	 
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("Denklemin a'sini giriniz:");
	scanf("%d",&a);
	printf("Denklemin b'sini giriniz:");
	scanf("%d",&b);
	printf("Denklemin c'sini giriniz:");
	scanf("%d",&c);
	
	delta = b*b -4*a*c;
	x1 = (-b+(sqrt(delta)))/2*a;
	x1 = (-b-(sqrt(delta)))/2*a;
	
	printf("Denklemin 1. koku %.3f, ikinci koku %.3f'dir'",x1,x2);
	
	
	
		
	
	
	return 0;
}
