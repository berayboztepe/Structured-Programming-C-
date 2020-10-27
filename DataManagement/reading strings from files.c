#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Dosyaya string yazma fonksiyonu

    FILE *ptr;
    char c[5];



    if((ptr = fopen("stringyazma.txt", "r+")) == NULL){
        printf("Error!");
        exit(1);
    }

    while(fgets(c, 5, ptr) != NULL){//girdiğimiz sayı kadar karakter okuması yapıyor.
        puts(c);
    }


    fclose(ptr);
    return 0;



}

