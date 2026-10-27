//202611716126
//张东生
#include <stdio.h>
#include <stdint.h>
int main(){
    uint8_t a=0b00001111;
    printf("十进制= %d\n", a);
    int m=a;
    for(int i=7;i>=0;i--){
        int n=1;
        for(int j=0;j<i;j++){
            n=n*2;
        }if(m/n==0){
            printf("0");               
        }else if(m/n==1){
            printf("1");
            m=m-n;
        }
    }
    return 0;
}