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
void liste_basina_ekle(int icerik, node **listebasi){
    node * root = Hucre_Olustur(icerik);
    root -> sonraki = *listebasi;
    *listebasi = root;

}

void liste_sonuna_ekle(int icerik, node **listebasi){
    node * temp = Hucre_Olustur(icerik);

    if(*listebasi == NULL){
            temp -> sonraki = *listebasi;
            *listebasi = temp;
    }
    else{
        node * iter = *listebasi;

        while(iter -> sonraki != NULL){
            iter = iter -> sonraki;
    }
        iter -> sonraki = temp;
    }

}
void liste_yazdir(node *listebasi){
    printf("Listenin Elemanlari = ");
    while(listebasi != NULL){
        printf(" %d ", listebasi -> icerik);
        listebasi = listebasi -> sonraki;
    }
    printf("\n");
}
void liste_sirali_ekle(int icerik, node **listebasi){
    node *temp, *iter, *eklenen;
    iter = *listebasi;
    while(iter != NULL && iter -> icerik <= icerik){
        if(iter -> icerik == icerik)
            return;
        temp = iter;
        iter = iter -> sonraki;
    }
    eklenen = Hucre_Olustur(icerik);
    if(iter == *listebasi){
        eklenen -> sonraki = *listebasi;
        *listebasi = eklenen;
    }
    else{
        temp -> sonraki = eklenen;
        eklenen -> sonraki = iter;
    }

}
void liste_eleman_sil(int icerik, node ** listebasi){
    node *iter = *listebasi;
    node* once;
    while(iter != NULL && iter -> icerik != icerik){
        once = iter;
        iter = iter -> sonraki;
    }
    if(iter == NULL){
        printf("Listede silinmek istenen eleman yoktur, silme islemi yapilamaz..\n");
        return;
    }
    else if(iter == *listebasi){
        (*listebasi) = (*listebasi) -> sonraki;
    }
    else{
        once -> sonraki = iter -> sonraki;
    }
    free(iter);

}


int main(int argc, char** argv) {

    node * liste1 = NULL;

    liste_basina_ekle(15, &liste1);
    liste_basina_ekle(10, &liste1);
    liste_sonuna_ekle(30, &liste1);
    liste_yazdir(liste1);
    liste_sirali_ekle(17, &liste1);
    liste_sirali_ekle(13, &liste1);
    liste_sirali_ekle(20, &liste1);
    liste_yazdir(liste1);
    liste_eleman_sil(30, &liste1);
    liste_eleman_sil(50, &liste1);
    liste_yazdir(liste1);
    liste_sirali_ekle(50, &liste1);
    liste_sirali_ekle(35, &liste1);
    liste_sirali_ekle(11, &liste1);
    liste_yazdir(liste1);


}
