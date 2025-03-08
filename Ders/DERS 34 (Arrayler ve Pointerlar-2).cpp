#include<stdio.h> 

int max(int *a, int size) { //burda *a yerine normalde a[] vardi
	
	int max=a[0];
	int i;
	
	for(i=1; i<size; i++) {
		
		if(a[i]>max) {
			
			max=a[i];
			
		}
		
	}
	
	return max;
}



int main() {
	
	int sayilar[5] ={3,4,42,100,1};
	int nebula = max(sayilar,5);
	
	printf("Sayilar dizisinin en buyuk degeri %d dir",nebula);
	
	
	return 0;
}
