//
// Created by shimmer on 2023/12/24.
//
#include <stdio.h>


/*
 *1.常用的类型：float（4字节） \ double（8字节） \ long double（12字节）
 *
 *2.float 表示数据的范围要大于long类型表示的范围
 *
 *3.浮点型变量不能使用signed或unsigned修饰符。

  4.最常用的浮点类型为：double 类型，因为精度比float高。

  5.浮点型常量，默认为 double 类型
 *
 *6.关于后缀：
 *      如果定义float类型，则需要以F或f作为后缀
 *      如果定义long double类型，则需要以L或l作为后缀
 */
int main(){

    double d1 = 12.3 ;
    double d2 = d1 + 2.3 ; //2.3是double类型

    float f1 = 12.3f ;
    float f2 = 12.3F ;

    long double d3 = 12.3l ;

    //其他的表示方法（了解）
    double d4 = 12.3e3 ;
    printf("d4 = %lf\n" , d4) ;

    double f = 64.0F;
    double c ;
    c =  5.0 / 9  * (f - 32 ) ;
    printf("华氏温度：%lf\n摄氏温度: %.1f\n" , f , c);

    return 0 ;
}