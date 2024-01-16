//
// Created by Shimmer on 2024/1/16.
//
#include <stdio.h>

#define ZERO 0
#define PI 3.1415

enum Sex{
    //括号中的MALE,FEMALE,SECRET是枚举常量
    MALE,
    FEMALE,
    SECRET,
};

int main(){
    //1.字面常量
    3.14 ;
    1000 ;

    //2.#define
    printf("zero = %d \n" , ZERO);

//    ZERO = 1 ; 不可以重新赋值

//    PI = 3.1415926 ;

    double  r = 2.3 ;
    double m = PI * r * r ;
    printf("m = %.2lf \n" ,  m) ;

    //3.C99中新的声明方式，使用const限定
    const int num = 10 ;
//    num = 20 ;

    //4.定义枚举常量
    printf("%d \n" , MALE);
    printf("%d \n" , FEMALE);
    printf("%d \n" , SECRET);

    return 0 ;
}

