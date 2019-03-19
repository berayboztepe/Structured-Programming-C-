#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int KareBul(int a){

return (a*a);


}

int main()
{
  int sonuc,sayi;
  printf("lutfen sayi giriniz:\n");
  scanf("%d",&sayi);

sonuc=KareBul(sayi);

printf("%d", sonuc);


   return 0;

}

