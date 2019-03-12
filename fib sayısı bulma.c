#include <stdio.h>
#include <stdlib.h>

int main()
{
int fib1=1,fib2=1,fib,a,i;
printf("Kacinci Fib Sayisini Bulmak Istiyorsunuz?\n");
scanf("%d",&a);

for(i=1;i<a;i++){
    fib=fib1+fib2;
    fib1=fib2;
    fib2=fib;
}
printf("%d",fib1);

return 0;



}









