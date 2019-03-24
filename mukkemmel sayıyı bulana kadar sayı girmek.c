#include <stdio.h>

/*bir mükkemmel sayı bulana kadar sayı girmeye devam (mukkemmel sayi=pozitif bolenlerinin toplamı kendisine eşit olan sayılar */

int main(){
int sayi,toplam=0,i=1;

printf("Sayi girin:");
scanf("%d",&sayi);

for(i=1;i<sayi;i++){
    if(sayi%i==0){
        toplam+=i;
}}
if(toplam==sayi){
    printf("Mukkemmel Sayidir\n");
}

while(sayi!=toplam){
    printf("Mukemmel Sayi Degildir\n");
    printf("Sayi girin:");
    scanf("%d",&sayi);
    toplam=0,i=1;

    while(i<sayi){
        if(sayi%i==0){
            toplam+=i;
            i++;
        }
        else{
            i++;
        }
}
    if(toplam==sayi){
            printf("Mukkemmel Sayidir\n");
            break;}
}

return 0;
}
