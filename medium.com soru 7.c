#include <stdio.h>
#include <stdlib.h>

/* �arpma i�lemi kullanmadan girilen iki say�n�n �arp�m� */

int carpma(){
int a,b;
int i=0,carpim=0;

printf("Sayi Girin:\n");
scanf("%d",&a);
printf("Sayi Girin:\n");
scanf("%d",&b);


if(b==0){
    carpim=0;
    printf("%d",carpim);
    return 0;
}

while(i!=b){
    carpim+=a;
    i++;


}

printf("Bu iki sayinin carpimi=%d",carpim);
return 0;

}



int main()
{
carpma();
return 0;

}
