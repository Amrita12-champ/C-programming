//waa a program to declare a constant PI=3.14159 and print the area of the circle for radious=7

#include<stdio.h>
int main(){
    int red=7;
    const float PI=3.1419;
    float area;
    area=PI*red*red;
    printf("Area of the circle is: %f", area );
    return 0;
}