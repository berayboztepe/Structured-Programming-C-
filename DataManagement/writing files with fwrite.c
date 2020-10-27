#include <stdio.h>
#include <stdlib.h>

int main()
{
    //fwrite ile dosyaya yazmak

    FILE *ptr;
    int dizi[10] = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};//ascii'ye göre bu sayılara denk gelen karakterler


    if((ptr = fopen("fwriteornek.txt", "w+")) == NULL){
        printf("Error!");
        exit(1);
    }


    fwrite(dizi, sizeof(int), 10, ptr);//dizinin başlangıç adresi, dizinin boyutu, dizideki eleman sayısı, dosya


    fclose(ptr);
    return 0;



}

