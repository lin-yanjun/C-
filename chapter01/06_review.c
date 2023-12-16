//
// Created by Shimmer on 2023/12/16.
//
#include <stdio.h>

int main() {
    //01
    printf("Hello World!\n");

    //02
    /*
     * 多行注释
     */

    //03
    int a = 10 ;
    printf("a = %d " , a );

    printf("\n");

    float b = 3.1415926535f ;
    double c = 3.1415926535 ;
    printf("float : %f" , b);
    printf("\n");
    printf("double : %lf" , c);
    printf("\n");
    printf("float : %.8f" , b);
    printf("\n");
    printf("double : %.8lf" , c);

    printf("\n");

    char d = 'A' ;
    printf("A = %c \n" , d );

    printf("%s \n","你好");

    int f = 5 ;
    char level = 'S' ;
    printf("%s战斗%d秒，刷%c级别放大招！","莎米拉" , f , level);

    return 0;
}