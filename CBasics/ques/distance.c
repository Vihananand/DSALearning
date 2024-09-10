//Calculate the distance travveled by a tyre in one rotation
#include <stdio.h>
int main(){
    int radius;
    const float pi = 3.14;
    float dis_travelled;

    printf("Enter the radius : ");
    scanf("%d", &radius);

    dis_travelled = 2 * pi * radius;
    printf("Distance Travelled : %f",dis_travelled);
}