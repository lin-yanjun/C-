//
// Created by Shimmer on 2024/1/11.
//

#include <stdio.h>
#include <stdbool.h>

//ʹ�ú궨��
#define TRUE 1
#define FALSE 0
#define BOOL int

int main(){

    //��1�ִ���ʽ
    //C89�У����ʹ�ò������͵Ļ���ʹ��0��ʾfalse���١���ʹ��1(���0)��ʾtrue���桢��
    int handsome = 1 ;
    handsome = 0 ;

    if(handsome){
        printf("�Һ�˧��\n");
    }

    //��2�ִ���ʽ
    BOOL handsome1 = TRUE ;
//    handsome1 = FALSE ;

    if(handsome1){
        printf("�����\n");
    }

    //��3�ִ���ʽ
    // C99 ��׼��������� _Bool ����ʾ����ֵ�����߼�ֵtrue��false��
    _Bool  isBeauty = 1 ;
    if(isBeauty){
        printf("������\n");
    }

    //��4�ִ���ʽ
    //C99���ṩ��һ��ͷ�ļ� stdbool.h���ļ��ж����� bool���� _Bool
    bool isFlag = true ;
    if(isFlag){
        printf("yes\n");
    }

    return 0 ;
}