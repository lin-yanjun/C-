//
// Created by Shimmer on 2024/1/12.
//
#include <stdio.h>

int main(){
    /*
     * 1������4���㣬��2��2������2,-2������-2��2������-2��-2��
     * 2��Բ�İ뾶Ϊ1��4�����Բ���߶�Ϊ10������ĸ߶�Ϊ0
     * 3�����������x��y
     */

    int h = 10 ;
    float x1 = 2 , y1 = 2 , x2 = 2 , y2 = -2 ;
    float x3 = -2 , y3 = 2 , x4 = -2 , y4 = -2 ;
    float x , y ;
    printf("����������(x,y):");
    scanf("%f,%f" , &x , &y);
    float d1 , d2 , d3 , d4 ;
    d1 = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
    d2 = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
    d3 = (x3 - x) * (x3 - x) + (y3 - y) * (y3 - y);
    d4 = (x4 - x) * (x4 - x) + (y4 - y) * (y4 - y);

    if(d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1){
        printf("���꣨%.2f %.2f���ĸ߶�Ϊ0" , x , y);
    } else{
        printf("���꣨%.2f %.2f���ĸ߶�Ϊ%d" , x , y , h);
    }

    return 0;
}