#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void Degistir(char *p1, char *p2){

int tutucu = 0;

for(int i = 0; *(p1+i) != '\0'; i++){
    tutucu++;
}

for(int i = 0; i < tutucu; i++){
    *(p1+i) = '?';
    *(p2+i) = *(p1+i);
    printf("%c", *(p2+i));
}
}

int main(){

 char d1[20];
 char d2[20];

 char *p1 = d1;
 char *p2 = d2;



 printf("Kelimeyi girin:");
 scanf("%s", &p1);


 Degistir(&p1, &p2);


return 0;


}

