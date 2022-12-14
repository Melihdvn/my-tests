#include<stdio.h>

int main(){

int x=9;
int Pass;
char Username[20];

while(x == 9){
printf("Hoşgeldiniz \n Kullanici adi giriniz: ");
scanf ("%s", &Username);

if(Username == "Melih"){
x=1;
}
if (Username != "Melih")
{
printf("Bilinmeyen kullanici. \n Tekrar deneyin: \n ");

}

}

if(x == 1){
    printf("Hoşgeldin %s, \n Lutfen sifre giriniz:\n ", Username);
 x=2;
}

while(x == 2){
 
  scanf("%d", &Pass);
if (Pass == 5353)
		{
			printf("\nSifre dogru, tekrardan hosgeldiniz.");
			x = 3;
		}
		else
		{
			printf("\nSifre yanlis,baska sifre deneyiniz:");
		}
		printf("\n");
	}


	return 0;
}






