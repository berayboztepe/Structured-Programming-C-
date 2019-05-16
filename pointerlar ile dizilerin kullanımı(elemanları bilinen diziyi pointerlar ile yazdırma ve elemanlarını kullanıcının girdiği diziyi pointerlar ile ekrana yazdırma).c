#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
int dizi[]={1,10,5,6};
int *p,i;
p=dizi;

for(i=0;i<4;i++){
    printf("dizinin %d. elemani = %d-------bu elemanin adresi = %p\n", i+1, *(p+i), p+i);
}

    return 0;
*/
int main(){
    int dizi[10];
    int *p, i;

    printf("5 tane sayi girin:");
    for(i=0;i<5;i++){
        scanf("%d\n", &dizi[i]);
    }
    p=dizi;

    for(i=0;i<5;i++){
        printf("dizinizin %d. elemani = %d\t bu elemanin adresi = %p\n", i+1, *(p+i), p+i);
    }

}

