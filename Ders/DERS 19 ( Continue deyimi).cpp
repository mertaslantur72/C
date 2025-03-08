#include<stdio.h>

/* Aþaðýda yapýlan iþlem for döngüsü ile yapýldý. Þimdi While döngüsü ile de yapacazzz.*/

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

// Bu da While döngüsü ile yapýlaný//

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


/* While döngüsündeki sýkýntý sonsuz döngüye girmesi. Yani continue ile karþýlaþýnca alttaki i++ iþlemini yapmýyor ve kýsýr döngüye giriyor(i sürkli 1 klyo
bunu çözmek için continue nin altýna i++; yazarsýn olur biter*/
