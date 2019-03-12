#include <stdio.h>
#include <stdlib.h>

int main()
{
int fact=1,i=1,sayi;

printf("Faktoriyelini Bulmak Istediginiz Sayi Hangisidir?\n");
scanf("%d",&sayi);

if(sayi<0)
    printf("Lutfen Sifirdan Buyuk Sayi Giriniz\nAnlayisiniz Ýcin Tesekkur Ederiz..");

else{
    while(i<=sayi){

        fact=(fact*i);
        i++;
    }
    printf("%d",fact);


}


return 0;



}









