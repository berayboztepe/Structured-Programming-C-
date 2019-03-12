#include <stdio.h>

int main()
{
    int can;

    char klavye;

    printf("bir tusa basiniz:\n");
    scanf("%c",&klavye);

    printf("caninizi girin:\n");
    scanf("%d",&can);

    if(klavye=='q')
{
        printf("tuy firlatildi 250 buyu hasari verildi\n");
        printf("can=%d\n",can=(can-250));
        if(can<=0)
            printf("an enemy has been slain\n");
        else
            printf("an enemy has been escaped\n");
}
    else if(klavye=='w')
{
        printf("dusmani havaya savurdunuz 300 buyu hasari verildi\n");
        printf("can=%d\n",can=(can-300));
        if(can<=0)
            printf("an enemy has been slain\n");
        else
            printf("an enemy has been escaped\n");
}
    else if(klavye=='e')
{
        printf("you have saved your teammate\n");

}
    else if(klavye=='r')
{
        printf("dusmaný charmladiniz ve ona 500 buyu hasari verdiniz\n");
        printf("can=%d\n", can=(can-500));
        if(can<=0)
            printf("an enemy has been slain\n");
        else
            printf("an enemy has been escaped\n");

}
return 0;
}
