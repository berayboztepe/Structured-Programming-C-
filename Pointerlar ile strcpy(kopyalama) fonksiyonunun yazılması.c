#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void mystrcpy(char *s1, char *s2){
int a,i;
while((*s1 = *s2) != '\0'){
    s1++;
    s2++;
}
}
int main(){

char s1[100];
char s2[100];

char *s1p;
char *s2p;

s1p=s1;
s2p=s2;

printf("Ilk Kelimeyi Girin:");
scanf("%s", s1p);
printf("\nKopyalanacak Kelimeyi Girin:");
scanf("%s", s2p);



//printf("\n%s", s1p);

mystrcpy(&s1, &s2);
printf("\n%s", s1);

}


