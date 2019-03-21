#include <stdio.h>
#include <stdlib.h>
void Menu(){
int sec;

printf("1-Asal Sayi Bulma\n");
printf("2-En Kucuk Sayi Bulma\n");
printf("3-Cikis\n");
printf("Secim:\n");
scanf("%d",&sec);

while((sec!=1)&&(sec!=2)&&(sec!=3)){
        printf("Hatali Giris!\n");
    printf("1-Asal Sayi Bulma\n");
    printf("2-En Kucuk Sayi Bulma\n");
    printf("3-Cikis\n");
    printf("Secim:\n");
    scanf("%d",&sec);

}
if(sec==1){
    asal_sayi();
}
if(sec==2){
    en_kucuk_sayi();
}
if(sec==3){
    exit(0);
}
}


int asal_sayi(){
int buyuksayi,kucuksayi,sayi,i,d;
printf("Buyuk Sayiyi Girin:\n");
scanf("%d",&buyuksayi);
printf("Kucuk Sayiyi Girin:");
scanf("%d",&kucuksayi);

for(sayi=kucuksayi;sayi<buyuksayi;sayi++){
    for (i = 2; i<sayi; i++){
        if(sayi%i==0){
            d=0;
            break;}
        else
            d=1;

}
    if(d==1)
        printf("%d\n", sayi);
}

Menu();


return 0;
}

int en_kucuk_sayi(){
int s1,s2,s3;
int enk=1200;
printf("Ilk Sayiyi Girin:\n");
scanf("%d",&s1);
printf("Ikinci Sayiyi Girin:\n");
scanf("%d",&s2);
printf("Ucuncu Sayiyi Girin:");
scanf("%d",&s3);

while((s1<enk) && (s2<enk)&& (s3<enk)){
    if(s1<enk){
        enk=s1;
        if(s2<enk){
            enk=s2;
            if(s3<enk)
                enk=s3;
        if(s3<enk){
            enk=s3;
        }
        }

}
    if(s2<enk){
        enk=s2;
        if(s3<enk){
            enk=s3;
        }

    }
    if(s3<enk){
        enk=s3;
    }
}



printf("Bu Sayilardan En Kucugu=%d\n",enk);
Menu();
return 0;
}





int main(void)
{
    Menu();
    return 0;
}
