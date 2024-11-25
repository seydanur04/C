 #include<stdio.h>
 
 // Switch ile Tek Sayý Çift Sayý Bulma
 
 int main(){
 	
	int sayi;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi%2){
		case 0: printf("çift sayidir."); break;
		case 1: printf("tek sayidir."); break;
		
	}
	
	
 }
