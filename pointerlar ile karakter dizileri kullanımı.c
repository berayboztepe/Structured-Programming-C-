#include <stdio.h>
#include <stdlib.h>
int main(){

char isim[]="Beray";
char *p;

p=isim;

printf("%s", p);
//dizilerdeki atamayla ayn�!!!!!!!

while(*p!=NULL){
    printf("%c\t adres = %p\n", *p, p);
    p++;
}

int i=0;
while(isim[i]!=NULL){
    printf("%c\n", *(isim+i));
    i++;
}

//BU 2 WH�LE B�RB�R�N�N AYN�S�!!!!!!!!!!!!!!!

}

