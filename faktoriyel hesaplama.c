#include <stdio.h>
#include <stdlib.h>

int main()
{
int fact=1,i=1,sayi;

printf("Faktoriyelini Bulmak Istediginiz Sayi Hangisidir?\n");
scanf("%d",&sayi);

while(sayi<0){
    printf("Lutfen Sifirdan Buyuk Sayi Giriniz\nAnlayisiniz Ýcin Tesekkur Ederiz..\n");
    printf("Tekrar Sayi Girin:\n");
    scanf("%d",&sayi);
}
    while(i<=sayi){

        fact=(fact*i);
        i++;
    }
    printf("%d",fact);

return 0;
}








