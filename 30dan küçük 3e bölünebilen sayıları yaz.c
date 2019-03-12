#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
while(i<31)
    if((i%3)==0){
        printf("%d\n",i);
        i+=1;
    }
    else
        i+=1;

    return 0;


}
