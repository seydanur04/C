#include <stdio.h>

//kullan�c� taraf�ndan girilen 3 say�dan en b�y���n� bulan program� yaz�n

int main (){
	
	// kullan�c�dan 3 say� iste
		
	int sayi1,sayi2,sayi3,enBuyuk;
	printf("sayilari girin: ");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3); 
	
	
	// en b�y���n� buldur
	
	enBuyuk = (sayi1>sayi2)?sayi1:sayi2;
	enBuyuk = (enBuyuk>sayi3)?enBuyuk:sayi3;
	
	
	// sonucu ekrana yazd�r
	
	printf("en buyuk sayi: %d\n", enBuyuk);
	
	
}
