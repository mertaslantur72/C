#include<stdio.h>
#include<stdlib.h>

/* main içindeki kod bizden array in boyutunu ve elemanlarýný istiyor. Ardýndan array ý basýyor. Bunu bizldiðimiz diziler ile yapamazdýk çünkü bildiðimiz diziler
 statik alana sahiptir. Yani dizinin boyutu daha sonra belirlenemez. Kodun baþýnda scanf() ile almaya çalýþýrsan da hata vaerecektir.
 */

int main() {
	
int size,*pc;

printf("Lutfen dizinin boyutunu giriniz:");
scanf("%d",&size);

pc = (int*)malloc(size*sizeof(int));

printf("Lutfen dizinin elemanlariniz giriniz:\n");

for(int i=0; i<size; i++) {

	scanf("%d",&pc[i]);
	
}

 for(int j=0; j<size; j++) {
 
 
    printf("pc[%d] = %d\n",j,pc[j]); 
 
 }
 
 
free(pc);
	
	
	return 0;
}


/*
malloc() fonksiyonu ram de içrisine yazdýðýmýz miktar kadar alan ayýrýr bize. Örnek bir kullanýmý aþaðýya býrakýyorum:

int *pc;
pc = (int*)malloc((istedðin eleman sayýsý)*sizeof(int));

Þuan yukarýda istediðimiz eleman sayýsýna sahip bir int dizisi oluþtumuþ olduk.
printf("%d",pc); yapacak olur isek malloc ile ayýrýlan belleðin baþýnýn adresini bize verir. yani pc[0] adresini verir.
printf("%d",*pc); yaparsak o adresteki deðeri bize basar, Eðer biz deðer atamamýþsak çöp deðer basacaktýr. 

free(pc); ise kodu kapattýktan sonra ram den istediðimiz alanýn hala iþgal edilmemesi için o alaný serbest býrakýr.
*/


/* 
                                            CALLOC VE REALLOC

Calloc ile malloc arasýndaki farklar:

KULLANIM:

malloc -----> (5*sizeof(int));
calloc -----> (5,sizeof(int));

AYIRILAN BELLKE ÝÇÝN:

malloc -----> Çöp deðerlere sahip ( printf("%d",*pc);  yaparsan)
calloc -----> Bütün deðerler 0 dýr

PERFORMANS :

malloc -----> hýzlý
calloc -----> malloca a göre yavaþ


REALLOC KULLANIMI: 

Bellekten daha önce ayrýlan bir alaný geniþletmek veya daraltmak için kullanýlýr.

a = malloc veya calloc ile daha önce yer aldýðýmýz bir pointer olsun.
a = realloc(a,yeni istediðimiz alan);

þeklinde kullanýlýr. ----->   realloc(a, 15*sizeof(int)); ----> bu bir örnek kullanýmdýr.

* Alaný geniþletilen dizinin içindeki deðerler deðiþmez
* Alaný daralttýðýmz zaman kesip attýðýmýz alandaki deðerler çöp veya 0 deðerini alýyor

*/ 

 


