#include <stdio.h>
#include <stdlib.h>

//Mainden girilen 2 sayi fonksiyona gonderiliyor ve yerleri degismis olarak geri donuyor(pointerlarin yardimi ile)
void Swap(int *a, int *b){
int temp;

temp=*a;
*a=*b;
*b=temp;

}


int main(){
int a, b;

printf("2 sayi giriniz:");
scanf("%d\n %d", &a, &b);

printf("Girdiginiz Sayilarin Ilk Hali = %d\t %d", a, b);

Swap(&a, &b);

printf("\nGirdiginiz Sayilarin Son Hali = %d\t %d", a, b);

}


//Faktoriyeli pointerlar ile hesaplama

int fakt(int *a){
int fakt=1,i;

for(i=(*a);i>0;i -= 1){
    fakt *= i;
}

return fakt;
}



int main(){
int a;
printf("Bir sayi girin:");
scanf("%d", &a);



printf("Girdiginiz sayi = %d\t Bu sayinin Faktoriyeli = %d", a, fakt(&a));

}
