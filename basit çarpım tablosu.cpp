#include<stdio.h>

// döngüler ile çarpım tablosu

int main(){
	
	int sayi,i;
	sayi = 0;
	i = 1;
	
	printf("1 ile 10 arasi sayi gir\n");
	scanf("%d",&sayi);
	
	if(sayi<1 || sayi>10){
		printf("lütfen geçerli sayi giriniz");
		return 0;
	}
		
	while (i<=10){
		printf("%d x %d\n",sayi,i, sayi*i);
		i++;
	}
	
	
	
}
