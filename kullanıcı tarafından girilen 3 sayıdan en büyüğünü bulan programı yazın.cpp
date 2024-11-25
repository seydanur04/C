#include <stdio.h>

//kullanýcý tarafýndan girilen 3 sayýdan en büyüðünü bulan programý yazýn

int main (){
	
	// kullanýcýdan 3 sayý iste
		
	int sayi1,sayi2,sayi3,enBuyuk;
	printf("sayilari girin: ");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3); 
	
	
	// en büyüðünü buldur
	
	enBuyuk = (sayi1>sayi2)?sayi1:sayi2;
	enBuyuk = (enBuyuk>sayi3)?enBuyuk:sayi3;
	
	
	// sonucu ekrana yazdýr
	
	printf("en buyuk sayi: %d\n", enBuyuk);
	
	
}
