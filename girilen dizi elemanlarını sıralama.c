#include <stdio.h>
#include <stdlib.h>

int main()
{
int dizi[5], i, j, temp;

printf("Sayilarinizi Girin:");


for(i=0;i<5;i++){
    scanf("%d", &dizi[i]);
}

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(dizi[j]>dizi[j+1]){
            temp=dizi[j];
            dizi[j]=dizi[j+1];
            dizi[j+1]=temp;
        }
    }
}
printf("siralanmis hali = ");
for(i=0;i<5;i++){
    printf("%d\t", dizi[i]);
}







    return 0;

}
