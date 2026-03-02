#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string name=get_string("what is your name\n");
    int age=get_int("what is your age\n");
    string phone=get_string("what is your phone\n");
    printf("The name is %s\n", name);
     printf("The age is %d\n", age);
    printf("The phone is %s\n", phone);
}
