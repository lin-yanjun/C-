//
// Created by Shimmer on 2023/11/21.
//
//练习1：开发一个 ILoveC.c 程序，可以输出 "某某 is studying c!"
//练习2：控制台打印：5 + 3 = 8

#include <stdio.h>

int main(){
    printf("Shimmer is studying c!\n");
    printf("%s is studying c!\n" , "Shimmer");

    printf("5 + 3 = 8\n");
    printf("%d + %d = %d\n" , 5 , 3, (5+3));
    return 0 ;
}