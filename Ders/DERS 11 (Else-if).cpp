#include<stdio.h>

int main () {
	
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	
	printf("Birinci vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("Ikinci vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("Final notunuzu giriniz:");
	scanf("%d",&final);
	printf("Donem sonu ortalamaniz kac ?");
	scanf("%f",&ortalama);
	
	dersort = (vize1+vize2+final)/3.0;
	
	if (dersort>60) {
		
		printf("Dersten gectiniz");
		
		}
		
		
		else if(dersort>50 && dersort<60) {
		 
		 printf("Bute kaldiniz");
	}
		
		
		else if (ortalama<2.5) {
			
			printf("Butu gecsen bile dersi seneye almalýsýn");
		}
		
		
		
	
	else {
		
		printf("Dersten kaldiniz");
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
