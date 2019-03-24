#include <stdio.h>
#include <stdlib.h>

/* 1-999 arasýnda rakamlarýnýn küpleri toplamý kendisine eþit olan sayýlarý kendin bulacaksýn (deneme-yanýlma) */

int basamak(){
int ust=999,alt=1;
int n=0,i=1;
int yb,ob,bb,basamak_kup;

while((n>ust) || (n<alt)){
    printf("Lutfen 1 ile 999 arasinda bir sayi giriniz:");
    scanf("%d",&n);

}
yb=(n/100);
ob=(n-(yb*100))/10;
bb=(n-(yb*100)-(ob*10));
basamak_kup=((yb*yb)*yb)+((ob*ob)*ob)+((bb*bb)*bb);

while(basamak_kup!=n){
    printf("Tekrar Sayi Giriniz:");
    scanf("%d",&n);

    yb=(n/100);
    ob=(n-(yb*100))/10;
    bb=(n-(yb*100)-(ob*10));
    basamak_kup=((yb*yb)*yb)+((ob*ob)*ob)+((bb*bb)*bb);

    i++;

    if((n>ust) || (n<alt)){
    printf("Lutfen 1 ile 999 arasinda bir sayi giriniz:");
    }
    if(basamak_kup==n){
        break;
    }

}
printf("%d\n",n);
printf("%d'inci denemenizde buldunuz...",i);
return 0;
}



int main()
{
basamak();
return 0;

}
