#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void menu(){
int sec,s1,s2;

printf("1-Kuvvet Bul\n");
printf("2-Toplam Bul\n");
printf("3-Cikis\n");
printf("Secim Girin:\n");
scanf("%d",&sec);

while(sec!=1 && sec!=2 && sec!=3){
    printf("Hatali Giris\n");
    printf("1-Kuvvet Bul\n");
    printf("2-Toplam Bul\n");
    printf("3-Cikis\n");
    printf("Secim Girin:\n");
    scanf("%d",&sec);
}
if(sec==1){
    printf("Sayi Girin:\n");
    scanf("%d",&s1);
    printf("Kuvvet Girin:");
    scanf("%d",&s2);
    printf("s1=%d\ns2=%d\n",s1,s2);
    printf("s1'in s2. kuvveti=%d\n", kuvvet_bul(s1,s2));
    menu();
}
if(sec==2){
    srand(time(NULL));
    s1=2+rand()%98;
    srand(time(NULL));
    s2=102+rand()%98;
    printf("sayi1=%d\n sayi2=%d\n ",s1,s2);
    printf("Toplam=%d\n", toplam_bul(s1, s2));
    menu();
}
if(sec==3){
    exit(0);
}
return 0;
}
int toplam_bul(int s1, int s2){
if(s1==0){
    return s2;
}

return toplam_bul(s1-1,s2)+1;
}
int kuvvet_bul(int s1, int s2){
if(s2==0){
    return 1;
}
else if(s2==1){
    return s1;
}
else{
    return s1*(kuvvet_bul(s1, s2-1));
}

}
int main(void)
{
menu();
return 0;
}
