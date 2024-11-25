#include<stdio.h>
#include<stdlib.h>

// asal sayi bulan program

int main(){
	
	int sayi,i;
	sayi = 0;
	i = 2;
	
	printf("pozitif sayi giriniz: ");
	scanf("%d", &sayi);
	
	if (sayi<0){
		printf("lütfen pozitif sayi giriniz.\n" );
		return 0;
	}
//	-while döngüsü ile bu şekilde						 -for döngüsü ile bu şekilde
	while(i< sayi/2){							  for(i=2; i<=sayi/2; i++){														}
		if(sayi%i == 0){						 	 if(sayi%i == 0){
			printf("asal sayi olamaz.",sayi,i);					printf("asal sayi olamaz.",sayi,i);
			return 0;								return 0;
		}								    	  }
		i++;
	}
	printf("bu bir asal sayidir.", sayi);
	return 0;
}
