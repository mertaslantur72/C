#include<stdio.h>
#include<stdlib.h>

/* main i�indeki kod bizden array in boyutunu ve elemanlar�n� istiyor. Ard�ndan array � bas�yor. Bunu bizldi�imiz diziler ile yapamazd�k ��nk� bildi�imiz diziler
 statik alana sahiptir. Yani dizinin boyutu daha sonra belirlenemez. Kodun ba��nda scanf() ile almaya �al���rsan da hata vaerecektir.
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
malloc() fonksiyonu ram de i�risine yazd���m�z miktar kadar alan ay�r�r bize. �rnek bir kullan�m� a�a��ya b�rak�yorum:

int *pc;
pc = (int*)malloc((isted�in eleman say�s�)*sizeof(int));

�uan yukar�da istedi�imiz eleman say�s�na sahip bir int dizisi olu�tumu� olduk.
printf("%d",pc); yapacak olur isek malloc ile ay�r�lan belle�in ba��n�n adresini bize verir. yani pc[0] adresini verir.
printf("%d",*pc); yaparsak o adresteki de�eri bize basar, E�er biz de�er atamam��sak ��p de�er basacakt�r. 

free(pc); ise kodu kapatt�ktan sonra ram den istedi�imiz alan�n hala i�gal edilmemesi i�in o alan� serbest b�rak�r.
*/


/* 
                                            CALLOC VE REALLOC

Calloc ile malloc aras�ndaki farklar:

KULLANIM:

malloc -----> (5*sizeof(int));
calloc -----> (5,sizeof(int));

AYIRILAN BELLKE ���N:

malloc -----> ��p de�erlere sahip ( printf("%d",*pc);  yaparsan)
calloc -----> B�t�n de�erler 0 d�r

PERFORMANS :

malloc -----> h�zl�
calloc -----> malloca a g�re yava�


REALLOC KULLANIMI: 

Bellekten daha �nce ayr�lan bir alan� geni�letmek veya daraltmak i�in kullan�l�r.

a = malloc veya calloc ile daha �nce yer ald���m�z bir pointer olsun.
a = realloc(a,yeni istedi�imiz alan);

�eklinde kullan�l�r. ----->   realloc(a, 15*sizeof(int)); ----> bu bir �rnek kullan�md�r.

* Alan� geni�letilen dizinin i�indeki de�erler de�i�mez
* Alan� daraltt���mz zaman kesip att���m�z alandaki de�erler ��p veya 0 de�erini al�yor

*/ 

 


