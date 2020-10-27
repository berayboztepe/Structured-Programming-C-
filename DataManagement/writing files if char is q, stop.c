#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dosyaya tek tek karakter yazma fonksiyonu = fputc(); karakterler giriyorsun, eğer q ise durduruyor
    //fopen_s yaparsak daha güvenli olur.Günümüzde daha çok o kullanılıyor.

    FILE  *ptr;
    char ch;

    ptr = fopen("fputdenemewithq.txt", "w+");
    puts("Karakterleri sirasiyla girin: ");
    if(ptr == NULL){
        printf("Error!!");
        exit(1);
    }

    while((ch = getchar()) != 'q'){
        putc(ch, ptr);
    }
    fclose(ptr);
    return 0;


}

