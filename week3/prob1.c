#include<stdio.h>
#include<cs50.h>
typedef struct //This create a user defined data type profile having 3 sets of values
{
    string name;
    int age;
    string number;
}profile;
profile get_candidate(string a);// function which stores the data of type profile
int main(void)
{
profile k=get_candidate("enter a candidate\n");// calling function get candidate which returns a profile type variable
printf("%s\n",k.name);
printf("%i\n",k.age);//we can access the values of this variable using dot operator
printf("%s\n",k.number);

}

profile get_candidate(string a)
{
    printf("hello\n");
    profile c;// here we only take input from user for each set of variable of profile datatype and returns the whole profile variable
    c.name=get_string("enter the name\n");
    c.age=get_int("enter the age\n");
    c.number=get_string("enter the number\n");
    return c;

}