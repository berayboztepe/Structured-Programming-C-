#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dosyaya string yazma fonksiyonu

    FILE *ptr;
    char c[100];//100 karakterli



    if((ptr = fopen("stringyazma.txt", "w+")) == NULL){
        printf("Error!");
        exit(1);
    }

    printf("Karakter dizisi girin:");
    gets(c);//klavyeden girilen karakter dizisi c değişkenine atandı
    fputs(c, ptr);//Bu dizi dosyaya yazıldı

    fclose(ptr);
    return 0;



}

