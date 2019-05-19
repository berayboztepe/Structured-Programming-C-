#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct OGR{

int num;
char isim[20];
int vize;


}ogr[3];

void sirala(struct OGR ogr[3]){
    struct OGR temp;
    for(int i = 1; i < 3; i++){
        for(int j = 0; j < 3-i; j++){
            if(ogr[j+1].vize < ogr[j].vize){
                temp = ogr[j+1];
                ogr[j+1] = ogr[j];
                ogr[j] = temp;
            }
            if(ogr[j+1].vize == ogr[j].vize){
                if(ogr[j].num < ogr[j+1].num){
                    temp = ogr[j];
                    ogr[j] = ogr[j+1];
                    ogr[j+1] = temp;
                }
            }

        }
}
for(int i = 0; i < 3; i++){
printf("\n\n\n\n%d. Dusuk Vize Notu Olan Ogrencinin Ismi = %s", i+1, ogr[i].isim);
printf("\n\n%d. Dusuk Vize Notu Olan Ogrencinin Numarasi = %d", i+1, ogr[i].num);
printf("\n\n%d. Dusuk Vize Notu Olan Ogrencinin Vize Notu = %d", i+1, ogr[i].vize);
}
}


int main(){

for(int i = 0; i < 3; i++){
    printf("\n%d. Ogrencinin Ismini Girin:", i+1);
    scanf("%s", &ogr[i].isim);
    printf("\n%d. Ogrencinin Numarasini Girin:", i+1);
    scanf("\n%d", &ogr[i].num);
    printf("\n%d. Ogrencinin Vize Notunu Girin:", i+1);
    scanf("%d", &ogr[i].vize);
}

sirala(ogr);



return 0;


}

