// Adding two floating numbers by taking inputs
#include<stdio.h>

int main(){
    float x,y,sum;
    printf("Enter the first number: ");
    scanf("%f",&x); // Input 2.55
    printf("Enter the second number: ");
    scanf("%f",&y); // Input 4.62
    sum = x + y;
    printf("The sum of the two numbers is: %f\n",sum); // Output: 7.17

    return 0;
}
