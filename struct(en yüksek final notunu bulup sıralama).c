#include <stdio.h>
#include <stdlib.h>

struct ogrenci{

char isim[20];
int ogr_num;
int vize;
int fin;

}ogr[3];

void ogr_bilg(){
    for(int i = 0; i < 3; i++){
        printf("\n%d. Ogrencinin Ismini Girin:", i+1);
        scanf("%s", ogr[i].isim);
        printf("\n%d. Ogrencinin Numarasini Girin:", i+1);
        scanf("%d", &ogr[i].ogr_num);
        printf("\n%d. Ogrencinin Vize Notunu Girin:", i+1);
        scanf("%d", &ogr[i].vize);
        printf("\n%d. Ogrencinin Final Notunu Girin:", i+1);
        scanf("%d", &ogr[i].fin);
}
main();
}
void yazdir(){
    for(int i = 0; i < 3; i++){
        printf("\n\n\n\n%d. Ogrencinin Ismi = %s", i+1, ogr[i].isim);
        printf("\n%d. Ogrencinin Numarasi = %d", i+1, ogr[i].ogr_num);
        printf("\n%d. Ogrencinin Vize Notu = %d", i+1, ogr[i].vize);
        printf("\n%d. Ogrencinin Final Notu = %d", i+1, ogr[i].fin);
}
main();
}

void Sirala(){
    struct ogrenci temp;
    for(int i = 1; i < 3; i++){
        for(int j = 0; j < (3-i); j++){
            if(ogr[j].fin > ogr[j+1].fin){
                temp = ogr[j+1];
                ogr[j+1] = ogr[j];
                ogr[j] = temp;
            }
        }
    }
main();
}


int main(){
int sec;

printf("\n\n\n\n1- Ogrenci Bilgisi Girisi\n2- Ogrenci Bilgileri Yazdirma\n3- Ogrenci Siralama\nSeciminizi Girin:");
scanf("%d", &sec);

if(sec == 1){
    ogr_bilg();
}
else if(sec == 2){
    yazdir();
}
else if(sec == 3){
    Sirala();
}
else{
    printf("\n\n\n\nYanlis Girdi!!!!!");
    main();
}
}
