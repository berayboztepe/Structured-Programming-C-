#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int faktoriyel(int i){


int fact=1;

for(; i>0; i--){

  fact*=i;

}

return fact;
}

int main()
{
    int n;
printf("sayi girin:\n");
scanf("%d",&n);
printf("%d", faktoriyel(n));


   return 0;

}

