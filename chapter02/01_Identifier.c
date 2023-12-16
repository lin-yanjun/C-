//
// Created by Shimmer on 2023/12/16.
//
#include <stdio.h>

/*
 * 1.什么是标识符？
 *      C语言中变量、函数、数组名、结构体等要素命名时使用的字符序列，称为标识符。
        -->凡是自己可以起名字的地方都叫标识符。比如：变量名、函数名、数组名、结构体名。
 *
 *2.标识符命名规则--->必须遵守。如果不遵守，编译不通过。
 *      只能由26个英文字母大小写，0-9 或 _ 组成
 *      数字不可以开头
        不可以是关键字，但可以包含关键字
        C99和C11允许使用更长的标识符名，但是编译器只识别前63个字符。(会忽略超出的字符)
        不允许有空格。
        严格区分大小写字母。比如：Hello、hello是不同的标识符。
 *
 *3.标识符的命名建议--->建议大家遵守，如果不遵守，也不影响编译器的编译和运行。
 *      在起名字时，为了提高阅读性，要尽量有意义，“见名知意”。如：sum，name，max，year，total 等。
        不要出现仅靠大小写区分不同的标识符。如：name、Name 容易混淆
        尽量避免名字中出现数字编号，如value1、value2等，除非逻辑上需要编号。
        习惯上，所有宏定义、枚举常数、常量(只读变量)全用大写字母命名，用下划线分隔单词。
            比如： const double TAX_RATE = 0.08; //TAX_RATE 只读变量
        系统内部使用了一些下划线开头的标识符（比如两个下划线开头的变量名、一个下划线 + 大写英文字母开头的变量名）。
            比如，C99 标准添加的类型 _Bool 。为防止冲突，建议用户尽量避免使用下划线开头的标识符。
        下划线通常用于连接一个比较长的变量名。如：max_classes_per_student。
        变量名、函数名：多单词组成时，第一个单词首字母小写，第二个单词开始每个单词首字母大写：xxxYyyZzz (驼峰法，小驼峰)。
            比如： short stuAge = 20; ， tankShotGame 。
 *
 */
int main(){

    int num = 10 ;
    int num1 = 10 ;
    int num_1 = 10 ;

//    int 1num = 10 ;

//    int return = 10 ;
    int return1 = 10 ;
    int Return = 10 ;

    int a = 11 ;
    int A = 12 ;
    printf("a = %d , A = %d ", a , A );

    int _num = 10 ; //不推荐

    int student_age = 10 ;//下划线的命名方式
    int studentAge = 10 ;//小驼峰的命名方式
    return 0 ;
}