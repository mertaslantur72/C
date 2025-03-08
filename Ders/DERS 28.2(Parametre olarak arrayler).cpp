#include<stdio.h>

void bastir(int matris[][3],int size);


int main() {
	
	printf("Matrisi Doldurunuz:");
	
	int dizi[3][3];
	
	for(int i=0; i<3; i++) {
		
		
		for(int j=0; j<3; j++) {
			
			scanf("%d",&dizi[i][j]);
		}
		
	}
	
	bastir(dizi,3);
	
	return 0;
}


void bastir(int matris[][3],int size) {
	
    for(int i=0; i<3; i++) {
    	
    	for(int j=0; j<3; j++) {
    		
    		printf("%d",matris[i][j]);
    		
		}
		
		printf("\n");
	}
	
	
	
}
