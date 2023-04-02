#include <stdio.h>
#include <math.h>

int main() {

float base, height, area_of_triangle;
printf("Enter the base:");
scanf("%f", &base);
printf("Enter the value of the height:");
scanf("%f", &height); 
area_of_triangle= (0.5 * (base*height));
printf("the final answer is %.2f", area_of_triangle);
    return 0;
} 