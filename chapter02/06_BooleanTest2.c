//
// Created by Shimmer on 2024/1/13.
//
#include<stdio.h>
int main() {
    int h = 10;
    float x1 = 2, y1 = 2, x2 = -2, y2 = -2, x3 = -2, y3= -2, x4 = 2, y4 = -2;
    float x, y; //表示随意选中的一个点的坐标
    float d1, d2, d3, d4; //(x,y)这个点的坐标到各个圆心的离
    printf("请输入一个点(x,y)：\n");
    scanf("%f,%f", &x, &y);
    d1 = (x - x1) * (x - x1) + (y - y1) * (y - y1); //求该点到各中心点距离
    d2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    d3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
    d4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
    if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1) //判断该点是否在塔外
                h = 0;
    printf("x = %.2f \n" , x);
    printf("y = %.2f \n" , y);
    printf("该点高度为%d\n", h);
    return 0;
}