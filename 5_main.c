//202611716126
//张东生
#include <stdio.h>
int main(){
    float a;
    float b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    if(op=='+'){
        printf("%.2f\n",a+b);
    }else if(op=='-'){
        printf("%.2f\n",a-b);
    }else if(op=='*'){
        printf("%.2f\n",a*b);
    }else if(op=='/'){
        if(b==0){
            printf("错误：除数不能为零\n");
        }else{
            printf("%.2f\n",a/b);
        }
    }else{
        printf("错误：不支持的运算符\n");
    }
    return 0;

}