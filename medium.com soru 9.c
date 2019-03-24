#include <stdio.h>
#include <conio.h>
/* 1-10000 arasýnda girilen sayýnýn basamaklarýnýn toplamý */

int main(){
int binb,yb,ob,bb,bastop;
int n;

printf("sayi girin:\n");
scanf("%d",&n);





while(n<1 || n>9999){
    printf("1 ile 10000 arasinda sayi girin:\n");
    scanf("%d",&n);

    if(n>1 || n<9999){
        binb=n/1000;
        yb=(n-(binb*1000))/100;
        ob=(n-(yb*100+binb*1000))/10;
        bb =(n-(yb*100+ob*10+binb*1000));

        bastop=binb+yb+ob+bb;

    }

}

        binb=n/1000;
        yb=(n-(binb*1000))/100;
        ob=(n-(yb*100+binb*1000))/10;
        bb =(n-(yb*100+ob*10+binb*1000));

        bastop=binb+yb+ob+bb;


printf("Sayinin Basamaklari Toplami=%d",bastop);

return 0;




}
