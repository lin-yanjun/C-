//
// Created by Shimmer on 2023/12/23.
//

#include <stdio.h>
#include <limits.h>
#include <stdint.h>


/*
 * 整型的使用
 * 1. short \ int \ long \ long long
 * 以64位编译器为例：
 *      short: 2字节
 *      int: 4字节
 *      long: 8字节
 *      long long: 8字节（C99新增的）
 *
 * 2.整型可以被signed、unsigned修饰。
 *
 * 3.最常用的整数类型为：int类型
 *
 * 4.整数型常量，默认为int类型
 *
 * 5.关于后缀：
 *      声明long类型变量时，可以以后缀“l”或“L”结尾。
 *      声明long long类型，则后缀以 ll 或 LL 结尾。
 *
 */

int main(){

    int i = 11 ; //省略了signed
    i = -12 ;
    signed int k = 11 ;
    printf("i = %d \n" , i );
    printf("k = %d \n" , k );

    //声明一个无符号的整数：非负数
    unsigned int j = 10;
    printf("j = %d \n" , j );

    j = j + 20 ; //20:常量，默认是int类型

    //关于后缀
    long l1 = 12 ;//后续要讲的隐式转换（或自动类型提升）
    long l2 = 12L ;

    printf("%d\n" , INT_MIN) ;
    printf("%d\n" , INT_MAX) ;
    printf("%d\n" , SCHAR_MIN) ;

    short a = 1 ;
    printf("%d", a );

    int32_t x32 = 45933945;
    printf("%d \n" , x32);

    return 0 ;
}