#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{

    int data;
    struct node *next;

};

void fib_liste(int eleman){

struct node *fib1 = NULL;
struct node *fib2 = NULL;
fib1 = (struct node*)malloc(sizeof(struct node));
fib1->data = 0;
fib1->next = fib2;

fib2 =(struct node*)malloc(sizeof(struct node));
fib2->data = 1;
fib2->next = NULL;

int fib;

printf("\n\n\n\n\nGirdiginiz Sayiya Kadar Olan Fib Sayilari(girdiginiz sayi dahil) = %d->", fib1->data);

for(int i = 1; i < eleman; i++){

    fib=fib1->data + fib2->data;
    fib1->data=fib2->data;
    fib2->data=fib;
    printf("%d->", fib1->data);

}


}


void fib_bul(int eleman){
struct node *fib1 = NULL;
struct node *fib2 = NULL;
fib1 = (struct node*)malloc(sizeof(struct node));
fib1->data = 0;
fib1->next = fib2;

fib2 =(struct node*)malloc(sizeof(struct node));
fib2->data = 1;
fib2->next = NULL;

int fib;
for(int i = 1; i < eleman; i++){

    fib=fib1->data + fib2->data;
    fib1->data=fib2->data;
    fib2->data=fib;

}
printf("\n\nGirdiginiz Sayiya Esit Fibonacci Sayisi = %d", fib1->data);

}


int main(){
    int eleman;
    printf("Kacinci Fib Sayisini Bulmak Istersiniz:");
    scanf("%d", &eleman);

fib_liste(eleman);

fib_bul(eleman);

}

