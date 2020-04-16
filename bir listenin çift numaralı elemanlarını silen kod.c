#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct n{
    int icerik;
    struct n* sonraki;
};
typedef struct n node;

node * Hucre_Olustur(int icerik){
    node *root = (node *)malloc(sizeof(node));
    if(root == NULL){
        printf("Heapte yer ayrilamadi..\n");
        return;
    }
    root -> icerik = icerik;
    root -> sonraki = NULL;
    return root;
}
void listenin_basina_ekle(int icerik, node ** listebasi){
    node * temp = Hucre_Olustur(icerik);
    temp -> sonraki = *listebasi;
    *listebasi = temp;
}



void yazdir(node * listebasi){
    printf("Listenin Elemanlari = ");
    while(listebasi != NULL){
        printf(" %d ", listebasi -> icerik);
        listebasi = listebasi -> sonraki;
    }
    printf("\n");
}

void tek_mi(node **listebasi){
    node *iter = *listebasi;
    node *temp;
    while(iter != NULL){
        if(iter -> sonraki == NULL){
            break;
        }
        temp = iter -> sonraki;
        iter -> sonraki = iter -> sonraki -> sonraki;
        free(temp);
        iter = iter -> sonraki;
    }
}


int main(int argc, char** argv) {

    node * liste1 = NULL;
    node * liste2 = NULL;
    listenin_basina_ekle(15, &liste1);
    listenin_basina_ekle(50, &liste1);
    listenin_basina_ekle(10, &liste1);
    listenin_basina_ekle(2, &liste1);
    listenin_basina_ekle(23, &liste1);
    listenin_basina_ekle(22, &liste1);
    listenin_basina_ekle(67, &liste1);
    listenin_basina_ekle(66, &liste1);
    listenin_basina_ekle(78, &liste1);
    listenin_basina_ekle(77, &liste1);
    listenin_basina_ekle(90, &liste1);
    yazdir(liste1);

    listenin_basina_ekle(15, &liste2);
    listenin_basina_ekle(10, &liste2);
    listenin_basina_ekle(33, &liste2);
    yazdir(liste2);


    tek_mi(&liste1);
    yazdir(liste1);
    tek_mi(&liste2);
    yazdir(liste2);
}
