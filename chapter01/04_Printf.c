//
// Created by Shimmer on 2023/11/21.
//
//����printf()��ʹ��˵��

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("num = %d\n" , 5);

    int i = 56 ;
    int k = 60 ;
    printf("i = %d %d \n" , i , k);


    float f = 3.1415926535f; // �����ȸ�����
    double d = 3.1415926535; // ˫���ȸ�����

    // ʹ�� %f ��������ȸ�����
    printf("Float: %f\n", f); //Float: 3.141593
    // ʹ�� %lf ���˫���ȸ�����
    printf("Double: %lf\n", d); //Double: 3.141593
    // ʹ�� %f ��������ȸ�����
    printf("Float: %.8f\n", f); //Float: 3.14159274
    // ʹ�� %lf ���˫���ȸ�����
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

    printf("�Ұ�%s\n" , "������") ;

    printf("%s��%s%d������%c����","�����","������",1315,'S');


    return 0;
}

