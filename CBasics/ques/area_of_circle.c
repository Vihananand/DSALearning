#include <stdio.h>

void area_of_circle(float radius){
    float area;
    const float pi = 3.14;
    area = pi * radius * radius;
    printf("Area of Circle: %f", area);
}

int main(){
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area_of_circle(radius);
}