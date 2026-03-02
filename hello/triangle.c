#include<stdio.h>
#include<cs50.h>
bool valid_triangle(float a, float b,float c);
int main(void)
{
    int k;
    float a,b,c;
    do
    {
        a=get_float("enter the side 1\n");
        b=get_float("enter the side 2\n");
        c=get_float("enter the side 3\n");
    }while((a<1)||(b<1)||(c<1));

    k=valid_triangle(a,b,c);
    if(k)
    printf("true\n");
    else
    printf("false\n");
}

bool valid_triangle(float a, float b,float c)
{
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        return true;
    }
    else
    {
        return false;
    }
}