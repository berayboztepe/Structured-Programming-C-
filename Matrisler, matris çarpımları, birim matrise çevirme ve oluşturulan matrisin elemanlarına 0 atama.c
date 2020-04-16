#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

void Dinamik_matris_olustur(int ***dizi, int satir, int sutun){
    *dizi = (int **)malloc(sizeof(int *)*satir);
    for(int i = 0; i < satir; i++){
        *(*dizi + i) = (int *)malloc(sizeof(int)*sutun);
        for(int j = 0; j < sutun; j++){
            *(*(*dizi + i)+j) = rand()%10;
        }
    }

}
void Dinamik_matris_yaz(int ** dizi, int satir, int sutun){
    for(int i = 0; i< satir; i++){
        for(int j = 0; j<sutun; j++){
            printf(" %d ", *(*(dizi+i)+j));
        }
        printf("\n");
    }
}

void Birim_matris_yap(int ***dizi, int satir, int sutun){
for(int i = 0; i < satir; i++){
    for(int j = 0; j < sutun; j++){
        if(i == j){
            *(*(*dizi+i)+j) = 1;
        }
        else{
            *(*(*dizi+i)+j) = 0;
        }
    }
}


}

void Matris_elemanlarina_sifir_ata(int ***dizi, int satir, int sutun){
    for(int i = 0; i<satir; i++){
        for(int j = 0; j<sutun;j++){
            *(*(*dizi+i)+j) = 0;
        }
    }




}
void Dinamik_matris_carpimi(int **A, int A_satir, int A_sutun, int **B, int B_satir, int B_sutun, int **C, int C_satir, int C_sutun){

if(A_sutun != B_satir){
    printf("Bu iki matris carpilamaz...\n");
    return;
}
else if(A_satir != C_satir || B_sutun != C_sutun){
    printf("A ve B matrislerinin carpiminin sonucu C olamaz, degerler farkli..\n");
    return;
}
else{
    for(int i = 0; i < A_satir; i++){
        for(int j = 0; j < B_sutun; j++){
            C[i][j] = 0;
            for(int k = 0; k < A_sutun; k++){
                C[i][j] = C[i][j] + A [i][k]* B[k][j];
            }
        }
    }
}


}





int main(int argc, char** argv) {

    int **A, **B, **C;
    srand(time(NULL));
    /*Dinamik_matris_olustur(&A, 3, 4);
    printf("\n A matrisi su sekildedir \n");
    Dinamik_matris_yaz(A, 3, 4);
    Birim_matris_yap(&A, 3, 3);
    printf("\n Yeni A matrisi su sekildedir \n");
    Dinamik_matris_yaz(A, 3, 3);
    Dinamik_matris_olustur(&B, 4, 5);
    printf("\n B matrisi su sekildedir \n");
    Dinamik_matris_yaz(B, 4, 5);
    Birim_matris_yap(&B, 4, 4);
    printf("\n Yeni B matrisi su sekildedir \n");
    Dinamik_matris_yaz(B, 4, 4);
    */

    Dinamik_matris_olustur(&A, 4, 5);
    printf("\n A matrisi su sekildedir \n");
    Dinamik_matris_yaz(A, 4, 5);



    Dinamik_matris_olustur(&B, 5, 5);
    printf("\n B matrisi su sekildedir \n");
    Dinamik_matris_yaz(B, 5, 5);


    Dinamik_matris_olustur(&C, 4, 5);


    Dinamik_matris_carpimi(A, 4, 5, B, 5, 5, C, 4, 5);
    printf("A matrisi ile B matrisinin carpimi asagidaki gibidir..\n C | \n");
    Dinamik_matris_yaz(C, 4, 5);

    Birim_matris_yap(&C, 4, 5);
    printf("Birim matris haline getirilmis C matrisi su sekildedir..\n");
    Dinamik_matris_yaz(C, 4, 5);

    Matris_elemanlarina_sifir_ata(&A, 4, 5);
    printf("\n Elemanlarina 0 sayisi atanmis A matrisi su sekildedir \n");
    Dinamik_matris_yaz(A, 4, 5);

    Matris_elemanlarina_sifir_ata(&B, 5, 5);
    printf("\n Elemanlarina 0 sayisi atanmis B matrisi su sekildedir \n");
    Dinamik_matris_yaz(B, 5, 5);


}
