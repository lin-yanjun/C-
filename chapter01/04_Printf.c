//
// Created by Shimmer on 2023/11/21.
//
//关于printf()的使用说明

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("num = %d\n" , 5);

    int i = 56 ;
    int k = 60 ;
    printf("i = %d %d \n" , i , k);


    float f = 3.1415926535f; // 单精度浮点数
    double d = 3.1415926535; // 双精度浮点数

    // 使用 %f 输出单精度浮点数
    printf("Float: %f\n", f); //Float: 3.141593
    // 使用 %lf 输出双精度浮点数
    printf("Double: %lf\n", d); //Double: 3.141593
    // 使用 %f 输出单精度浮点数
    printf("Float: %.8f\n", f); //Float: 3.14159274
    // 使用 %lf 输出双精度浮点数
    printf("Double: %.8lf\n", d); //Double: 3.14159265

    int a = 10 ;
    printf("count is %d \n" , a);

    printf("There is %i students \n" , 99 );

    float b = 3.1415f ;
    double c = 3.1415 ;

    printf("float %f \n" , b) ;
    printf("float %.3f \n" , b) ;

    printf("double %lf \n" , c) ;
    printf("double %.3lf \n" , c) ;

    char level = 'a' ;
    char level2 = 'A' ;
    printf("level is %c \n" , level) ;
    printf("level is %c \n" , level2) ;

    printf("我爱%s\n" , "吴雅蕾") ;

    printf("%s爱%s%d，评分%c级别","林彦均","吴雅蕾",1315,'S');


    return 0;
}

