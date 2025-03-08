#include<stdio.h>

int main() {
	
	int vize,final,deneyler;
	float okulortalama;
	float dersort;
	
	printf("Vize Notunuz:");
	scanf("%d",&vize);
	printf("Final Notunuz:");
	scanf("%d",&final);
	printf("Deneylerden Aldiginiz Puan:");
	scanf("%d",&deneyler);
	printf("Universite Ortalamanizi Girin:");
	scanf("%f",&okulortalama);
	
	dersort = (vize * 3/10.0 + deneyler * 2/10.0 + final * 5/10.0);
	
	
	if(dersort>=90) {
		
		printf("Ders Harf Notunuz AA ve Ders Ortalamaniz: %f'dir.\n",dersort);
		printf("DERSTEN GECTINIZ");
		
	}
	
	
	else if (dersort>=85 && dersort<90) {
		
		printf("Ders Harf Notunuz BA ve Ders Ortalamaniz:%f'dir.",dersort);
		
		}
		
		
			else if (dersort>=80 && dersort<85) {
		
		printf("Ders Harf Notunuz BB ve Ders Ortalamaniz:%f'dir.",dersort);
		
		}
		
		
			else if (dersort>=75 && dersort<80) {
		
		printf("Ders Harf Notunuz CB ve Ders Ortalamaniz:%f'dir.",dersort);
		
		}
		
		
			else if (dersort>=70 && dersort<75) {
		
		printf("Ders Harf Notunuz CC ve Ders Ortalamaniz:%f'dir.",dersort);
		if(okulortalama<2.5){
			
			printf("Baba sen bu dersi bi daha al isterse.");
		}
		
		}
		
		
			else if (dersort>=65 && dersort<70) {
		
		printf("Ders Harf Notunuz DC ve Ders Ortalamaniz:%f'dir.",dersort);
		if(okulortalama<2.5) {
			
			printf("Ya ne biliyim morq al bence bu dersi bi daha, yaprsýn sen...");
		}
		
		
		
		}
		else if (dersort>=60 && dersort<65) {
		
		printf("Ders Harf Notunuz DD ve Ders Ortalamaniz:%f'dir.",dersort);
		if(okulortalama<2.5) {
			
			printf("Hala soruyo musun aq tabii ki alcan dersi mal .");
		}
		
		
		
		}
	
	else {
		
		printf("Harf Notunuz FF ve Ders ortalamaniz:%f'dir.",dersort);
		printf("Kaardsim gecmis olsun yarragi yedin");
	}
	
	
	
	return 0;
}
