#include <stdio.h>
#include <stdlib.h>
/* girilen say�ya kadar olan say�lar�n toplam� */



int main()
{
    int n,i;
    int toplam=0;
    printf("Bir sayi Girin:\n");
    scanf("%d",&n);
    i=1;
while(i!=n){
        toplam=toplam+i;
        i++;
}
    printf("N'e kadar olan sayilarin toplami= %d",toplam);
    return 0;

}
