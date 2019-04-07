#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Menu(){

int sec;
printf("1-Faktoriyel Hesabi\n2-Cikarma Islemi\n3-Rastgele 2 Sayinin Toplami\n4-N. Fibonacci Sayisini Bulma\n5-Rastgele 2 Sayinin Farki\n6-Cikis\nSeciminizi Girin:");
scanf("%d",&sec);

if (sec == 1){
    int fak;
    printf("Faktoriyelinin Bulunmasini Istediginiz Sayi Nedir:");
    scanf("%d",&fak);
    printf("\n\n\n%d'in faktoriyeli = %d\n\n\n\n", fak, Faktoriyel(fak));
    Menu();

}
else if(sec == 2){
    int s1, s2;
    printf("\nBirinci Sayiyi Girin:");
    scanf("%d", &s1);
    printf("\nIkinci Sayiyi Girin:");
    scanf("%d", &s2);
    printf("\n\n\n\n%d - %d = %d\n\n\n\n", s1, s2, Cikarma(s1, s2));
    Menu();

}
else if(sec == 3){
    int s1, s2;
    srand(time(NULL));
    s1 = 1 + rand() % 999;
    srand(time(NULL));
    s2 = rand() % 200;
    printf("\n\n\n\n%d + %d = %d\n\n\n\n", s1, s2, Toplama(s1, s2));
    Menu();
}
else if(sec == 4){
    long int sayi;
    printf("\n\n\n\nKacinci Fib Sayisini Bulmak Istersiniz:");
    scanf("%ld", &sayi);
    printf("\n\n\n\n%d'inci Fibonacci Sayisi = %d\n\n\n\n", sayi, Fibonacci(sayi));
    Menu();
}
else if(sec == 5){
    int s1, s2;
    srand(time(NULL));
    s1=1 + rand() % 999;
    srand(time(NULL));
    s2=rand() % 200;
    printf("\n\n\n\n%d - %d = %d\n\n\n\n",s1, s2, Rast_Cikarma(s1, s2));
    Menu();
}
else if(sec == 6){
    exit(0);
}
else{
    printf("\n\n\n\nHatali Giris! Lutfen 1-5 arasinda bir sayi girin...\n\n\n\n");
    Menu();
}

}
int Faktoriyel(int a){
    if(a <= 1){
        return 1;
    }
    return a*Faktoriyel(a-1);

}
int Cikarma(int a, int b){
    if(b == 0){
        return a;
    }
    return Cikarma(a, b-1) - 1;
}
int Toplama(int a, int b){
    if(b == 0){
        return a;
    }
    return 1 + Toplama(a, b-1);
}
int Fibonacci(int fib){
    if(fib == 0){
        return 0;
    }
    if(fib == 1){
        return 1;
    }

return  Fibonacci(fib-1) + Fibonacci(fib-2);

}
int Rast_Cikarma(int a, int b){
if(b == 0){
    return a;
}
return Rast_Cikarma(a, b - 1)-1;
}
int main(void){

Menu();

return 0;
}
