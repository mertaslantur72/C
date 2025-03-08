#include<stdio.h>

int main() {

int n=1;
int q=0;
int k;
	
for(int i=0; i<40; i++) {
		
k=q+n;
n=q;
q=k;

	printf("%d\n",k);
}
	
	return 0;
}

