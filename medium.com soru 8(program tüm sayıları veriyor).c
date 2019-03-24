#include <stdio.h>
#include <stdlib.h>
/* 1-999 arasýnda rakamlarýnýn küpleri toplamý sayýlarý veren program */

int basamak(){
int i=1;
int yb,ob,bb,basamak_kup;


while((i>0) && (i<999)){
        yb=(i/100);
        ob=(i-(yb*100))/10;
        bb=(i-(yb*100)-(ob*10));
        basamak_kup=((yb*yb)*yb)+((ob*ob)*ob)+((bb*bb)*bb);
        if(basamak_kup==i){
            printf("%d\n",i);
            i++;
        }
        else{
                i++;
        }

}
return 0;
}
int main(){

basamak();
return 0;

}
