#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* girilen sayýya kadar olan sayýlarýn kareleri toplamý */

int main()
{
   int n,kare;
   int toplam=0;
   int i=1;

   printf("Sayi Girin:\n");
   scanf("%d",&n);

   while(i!=n){
    kare=i*i;
    toplam+=kare;
    i++;

   }
   return toplam;
}
