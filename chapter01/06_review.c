//
// Created by Shimmer on 2023/12/16.
//
#include <stdio.h>

int main() {
    //01
    printf("Hello World!\n");

    //02
    /*
     * ����ע��
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

    printf("%s \n","���");

    int f = 5 ;
    char level = 'S' ;
    printf("%sս��%d�룬ˢ%c����Ŵ��У�","ɯ����" , f , level);

    return 0;
}