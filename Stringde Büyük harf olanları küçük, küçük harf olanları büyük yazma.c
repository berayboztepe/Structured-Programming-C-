#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Ters_Cevir(char kel[]){

int uzunluk=0, i;

for(i = 0; kel[i] != '\0'; i++){
    uzunluk++;
}

for(i = 0; i < uzunluk; i++){
    if(islower(kel[i])){
        kel[i] =toupper(kel[i]);
    }
    else{
        kel[i] = tolower(kel[i]);
    }
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
