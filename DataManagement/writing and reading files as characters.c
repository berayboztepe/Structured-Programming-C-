#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dosyaya tek tek karakter yazma fonksiyonu = fputc(); !'#... diye devam eder
    //ascii numarasına göre yazar. 33'ten itibaren yaz örneği:

    FILE  *ptr;
    int ch;

    ptr = fopen("fputdeneme.txt", "w+");

    if(ptr == NULL){
        printf("Error!!");
        exit(1);
    }

    for(ch = 33; ch < 100; ch++){
        fputc(ch, ptr);
    }
    fclose(ptr);


    FILE *ptr1;
    ptr1 = fopen("fputdeneme.txt", "r+");
    char c;
    //dosyadaki karakterleri okumak için fgetc();
    //feof = file end of line = yani programın sonuna yaklaşırsak program kırılsın anlamına gelir.

    if(ptr1 == NULL){
        printf("Error!");
        exit(1);
    }

    while(1){
        c = fgetc(ptr1);
        if(feof(ptr1)){
            break;
        }
        printf("%c", c);
    }
    fclose(ptr1);
    return 0;


}

