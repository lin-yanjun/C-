//
// Created by Shimmer on 2024/1/9.
//

#include <stdio.h>
/*
 * 在C语言中，使用char表示一个字符，使用''括起来。
 *
 * 一个char占用1个字符
 *
 *char类型中的每个字符对应着一个ASCII码，因为ASCII是一个数值，所以char类型的变量可以参与+ - * / 的运算
 *
 * 根据C90标准，C语言允许在关键字char前面使用signed或unsigned
 */


int main(){

    //表示方式1：使用一对''，括起来一个单独的字符
    char C1 = 'A' ;
    printf("C1 = %c \n" , C1);
    printf("C1 = %d \n" , C1);

    char C2 = 'a' ;
    printf("C2 = %c \n" , C2);
    printf("C2 = %d \n" , C2);

    //表示方式2：使用具体字符对应的ASCII码表示
    char C3 = 66 ;
    char C4 = 97 ;
    printf("C3 = %c \n" , C3);
    printf("C4 = %c \n" , C4);

    //区分：'1'和1
    char C5 = '1' ;
    char C6 = 1 ;
    printf("C5 = %c  , C6 = %c \n" , C5 , C6);
    printf("C5 = %d  , C6 = %d \n" , C5 , C6);

    printf("C1+1 = %c \n" , C1+1);

    //表示方式3：使用转义字符
    char C7 = '\n' ;//换行符
    char C8 = '\t' ;//制表符
    char C9 = '\'' ;//表示的字符为 '

    return 0 ;
}