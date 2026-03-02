#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    int goal;
    do{
    start=get_int("enter the starting population\n");

    }while(start<9);
    // TODO: Prompt for end size
do{
    goal=get_int("enter the ending population\n");
}while(goal<start);
    // TODO: Calculate number of years until we reach threshold
int year=0;
while(start<goal){

    start=start+(start/3)-(start/4);
    year++;
}
    // TODO: Print number of years
    printf("Years: %i",year);
}
