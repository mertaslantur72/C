#include<stdio.h>

/* A�a��da yap�lan i�lem for d�ng�s� ile yap�ld�. �imdi While d�ng�s� ile de yapacazzz.*/

int main() {
	
	int toplam =0;
	int i;
	
	
	for ( i=1 ; i<=10 ; i++) {
		
		
		if(i%2 == 1) {
			continue ;
		}
		
		toplam += i;
		
	}
	
	printf("%d",toplam);
	
	return 0;
}

// Bu da While d�ng�s� ile yap�lan�//

int main() {
	
	int toplam =0;
	int i;
	
	
	While( i=1 ; i<=10) {
		
		
		if(i%2 == 1) {
			continue ;
		}
		
		toplam += i;
		i++;
	}
	
	printf("%d",toplam);
	
	return 0;
}


/* While d�ng�s�ndeki s�k�nt� sonsuz d�ng�ye girmesi. Yani continue ile kar��la��nca alttaki i++ i�lemini yapm�yor ve k�s�r d�ng�ye giriyor(i s�rkli 1 klyo
bunu ��zmek i�in continue nin alt�na i++; yazars�n olur biter*/
