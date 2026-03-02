#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int s1;
do{
    s1=get_int("enter the valid height");
}
while((s1<=0)||(s1>8));

for(int i=1;i<=s1;i++){
    for(int j=1;j<=s1;j++){
        if(j>=(s1+1-i)){
            printf("#");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
}