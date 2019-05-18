#include <stdio.h>
#include <stdlib.h>

void Ters_Cevir(char kel[]){

int uzunluk=0, i;

for(i = 0; kel[i] != '\0'; i++){
    uzunluk++;
}

for(i = 0; i < (uzunluk/2); i++){
    int tut = kel[i];
    kel[i] = kel[uzunluk-1-i];
    kel[uzunluk-1-i] = tut;
}

for(i = 0; i < uzunluk; i++){
        printf("%c", kel[i]);

}
}

int main(){

char Kelime[100];

printf("Kelimenizi Girin:");
scanf("%s", Kelime);

Ters_Cevir(Kelime);

}
