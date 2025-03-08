#include<stdio.h>

int main() {
	

	int a,b,c;
	
	printf("Lutfen Siralanmasini Istediginiz Sayilari Giriniz:\n1_");
	scanf("%d",&a);
	
	printf("2_");
	scanf("%d",&b);
	
	printf("3_");
	scanf("%d",&c);
	



	if(a>b && a>c) {
		
		
		printf("Sayiniz %d'dir",a);
	}
	
	else if(b>a && b>c) {
		
		printf("Sayiniz %d'dir",b);
		
	}
	
	
	else if(c>a && c>b) {
		
		printf("Sayiniz %d'dir",c);
		
	}
	
	
	else {
		
		printf("Hatali Bir Islem Yaptiniz!");
		
	}
	
	
	
	return 0;
}
