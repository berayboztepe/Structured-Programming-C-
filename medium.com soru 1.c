#include <stdio.h>
#include <stdlib.h>
/* girilen sayýya kadar olan sayýlarýn toplamý */



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
