#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*girilen say�ya kadar olan tek say�lar�n toplam� */

int main()
{
   int n;
   int toplam=0;
   int i=1;

   printf("Sayi Girin:\n");
   scanf("%d",&n);

   for(;i<n;i++){
    if(i%2!=0){
        toplam+=i;
        }
   }
printf("Tek Sayilarin Toplami=%d",toplam);
return 0;
}
