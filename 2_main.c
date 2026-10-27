//202611716126
//张东生
#include <stdio.h>
int main(){
    float m;
    scanf("%f",&m);

    if(m>0){
        printf("正数\n");
    }else if(m<0){
        printf("负数\n");
    }else{
        printf("零\n");
    }
    return 0;

}