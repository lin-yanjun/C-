//
// Created by Shimmer on 2024/1/11.
//

#include <stdio.h>
#include <stdbool.h>

//使用宏定义
#define TRUE 1
#define FALSE 0
#define BOOL int

int main(){

    //第1种处理方式
    //C89中，如果使用布尔类型的话，使用0表示false、假、否；使用1(或非0)表示true、真、是
    int handsome = 1 ;
    handsome = 0 ;

    if(handsome){
        printf("我好帅！\n");
    }

    //第2种处理方式
    BOOL handsome1 = TRUE ;
//    handsome1 = FALSE ;

    if(handsome1){
        printf("林彦均\n");
    }

    //第3种处理方式
    // C99 标准添加了类型 _Bool ，表示布尔值，即逻辑值true和false。
    _Bool  isBeauty = 1 ;
    if(isBeauty){
        printf("吴雅蕾\n");
    }

    //第4种处理方式
    //C99还提供了一个头文件 stdbool.h，文件中定义了 bool代表 _Bool
    bool isFlag = true ;
    if(isFlag){
        printf("yes\n");
    }

    return 0 ;
}