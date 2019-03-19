#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int a){

int i;

for(i=2; i<a; i++){

    if(a%i==0){
        return 0;
    }
}
return 1;



}

int main()
{
int sayi;
printf("sayi girin:\n");
scanf("%d",&sayi);

if(isPrime(sayi)==0)
    printf("Asal degildir..\n");
if(isPrime(sayi)==1)
    printf("Asaldir..");

return 0;




}

