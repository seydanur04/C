 #include<stdio.h>
 
 // Switch ile Tek Say� �ift Say� Bulma
 
 int main(){
 	
	int sayi;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi%2){
		case 0: printf("�ift sayidir."); break;
		case 1: printf("tek sayidir."); break;
		
	}
	
	
 }
