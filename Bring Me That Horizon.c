#include <stdio.h>
#include <stdlib.h>

int main()
{
int BMTH;

printf("Sec Bakalim Yakisikli:\n");
scanf("%d", &BMTH);

if(BMTH==1){
    printf("Avalanche Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else if(BMTH==2){
    printf("Can You Feel My Heart Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else if(BMTH==3){
    printf("True Friends Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else if(BMTH==4){
    printf("Drown Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else if(BMTH==5){
    printf("Sleepwalking Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else if(BMTH==6){
    printf("Throne Baslatiliyor..\n");
    printf("Lutfen Bekleyiniz..");
}
else
    printf("Diger Sarkilari Kotu Be Gulum :/");

return 0;

}
