//
// Created by shimmer on 2023/12/24.
//
#include <stdio.h>


/*
 *1.���õ����ͣ�float��4�ֽڣ� \ double��8�ֽڣ� \ long double��12�ֽڣ�
 *
 *2.float ��ʾ���ݵķ�ΧҪ����long���ͱ�ʾ�ķ�Χ
 *
 *3.�����ͱ�������ʹ��signed��unsigned���η���

  4.��õĸ�������Ϊ��double ���ͣ���Ϊ���ȱ�float�ߡ�

  5.�����ͳ�����Ĭ��Ϊ double ����
 *
 *6.���ں�׺��
 *      �������float���ͣ�����Ҫ��F��f��Ϊ��׺
 *      �������long double���ͣ�����Ҫ��L��l��Ϊ��׺
 */
int main(){

    double d1 = 12.3 ;
    double d2 = d1 + 2.3 ; //2.3��double����

    float f1 = 12.3f ;
    float f2 = 12.3F ;

    long double d3 = 12.3l ;

    //�����ı�ʾ�������˽⣩
    double d4 = 12.3e3 ;
    printf("d4 = %lf\n" , d4) ;

    double f = 64.0F;
    double c ;
    c =  5.0 / 9  * (f - 32 ) ;
    printf("�����¶ȣ�%lf\n�����¶�: %.1f\n" , f , c);

    return 0 ;
}