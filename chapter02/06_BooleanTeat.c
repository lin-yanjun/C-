//
// Created by Shimmer on 2024/1/12.
//
#include <stdio.h>

int main(){
    /*
     * 1、存在4个点，（2，2），（2,-2），（-2，2），（-2，-2）
     * 2、圆的半径为1，4个点的圆塔高度为10，其余的高度为0
     * 3、输入任意的x，y
     */

    int h = 10 ;
    float x1 = 2 , y1 = 2 , x2 = 2 , y2 = -2 ;
    float x3 = -2 , y3 = 2 , x4 = -2 , y4 = -2 ;
    float x , y ;
    printf("请输入坐标(x,y):");
    scanf("%f,%f" , &x , &y);
    float d1 , d2 , d3 , d4 ;
    d1 = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
    d2 = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
    d3 = (x3 - x) * (x3 - x) + (y3 - y) * (y3 - y);
    d4 = (x4 - x) * (x4 - x) + (y4 - y) * (y4 - y);

    if(d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1){
        printf("坐标（%.2f %.2f）的高度为0" , x , y);
    } else{
        printf("坐标（%.2f %.2f）的高度为%d" , x , y , h);
    }

    return 0;
}