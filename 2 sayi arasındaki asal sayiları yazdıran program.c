#include <stdio.h>
#include <stdlib.h>
/* kullanıcının yaşına göre saat dakika gun saniye hafta ay veren program */
int main()
{
int ust,alt,i,sayi,d;
printf("Ust Degeri Girin:\n");
scanf("%d",&ust);
printf("Alt Degeri Girin:");
scanf("%d",&alt);

if(alt==0 || ust==1){
    printf("Bu aralikta asal sayi yoktur.\n");
}

for(sayi=alt;sayi<ust;sayi++){
    for(i=2;i<sayi;i++){
        if(sayi%i==0){
            d=1;
            break;
        }
        else
            d=0;


}
    if(d==0){
        printf("%d\n",sayi);
    }

}
if(d==1){
        printf("Bu aralikta asal sayi yoktur");
    }

return 0;
}








