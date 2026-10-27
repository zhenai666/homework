//202611716126
//张东生
#include <stdio.h>
int main(){
    float s;
    scanf("%f",&s);
    if(90<=s && s<=100){
        printf("A\n");
    }else if(80<=s && s<90){
        printf("B\n");
    }else if(70<=s && s<80){
        printf("C\n");
    }else if(60<=s && s<70){
        printf("D\n");
    }else if(0<=s && s<60){
        printf("E\n");
    }else{
        printf("输入无效\n");
    }
    return 0;
}