#include <stdio.h>
#include <stdlib.h>

struct ogrenciler{

char isim[20];
char bolum[100];
int sinif;
float ort;


}ogr[3];



int main(){

int i;

for(i = 0; i < 3; i++){
    printf("\n %d. Ogrencinin Ismini Giriniz:", i+1);
    scanf("%s", ogr[i].isim);
    printf("\n%s'nin Bolumunu Giriniz:", ogr[i].isim);
    scanf("%s", ogr[i].bolum);
    printf("\n%s'nin Sinifini Giriniz:", ogr[i].isim);
    scanf("%d", &ogr[i].sinif);
    printf("\n%s'nin ortalamasini Giriniz:", ogr[i].isim);
    scanf("%f", &ogr[i].ort);
}
system("CLS");
printf("\n-----------------\n");


for(i = 0; i < 3; i++){

    printf("%d. Ogrencinin Ismi : %s\n",i+1 ,ogr[i].isim);
    printf("%s'nin Bolumu : %s\n",ogr[i].isim,ogr[i].bolum);
    printf("%s'nin Sinifi : %d\n",ogr[i].isim ,ogr[i].sinif);
    printf("%s'nin Ortalamasi : %.2f\n",ogr[i].isim ,ogr[i].ort);
    printf("\n-----------------\n");


}



return 0;

}
