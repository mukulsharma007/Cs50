#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int arr[3];
    arr[0]=72;
    arr[1]=73;
    arr[2]=33;
    printf("%f\n",(arr[0]+arr[1]+arr[2]) / (float)3);// make any digit float to make result float (3.0) or typecast (float)3
}