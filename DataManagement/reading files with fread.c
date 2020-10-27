#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fread ile dosyayı okumak

    FILE *ptr;
    int dizi[10];


    if((ptr = fopen("fwriteornek.txt", "r+")) == NULL){
        printf("Error!");
        exit(1);
    }
    fread(dizi, sizeof(int), 11, ptr);//dizinin başlangıç adresi, dizinin boyutu, dizideki eleman sayısı, dosya
    puts(dizi);//tek karakteri okuyup yazıyor


    fclose(ptr);
    return 0;



}

