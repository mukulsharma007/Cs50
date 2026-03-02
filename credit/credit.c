#include <cs50.h>
#include <stdio.h>
int digit(int number);//check for sum of digits
long checksum(long number);//return 1 if card is vaild
long even(long number);//remaining digits.
long count(long number);//count digits
long first(long number);
long two(long number);
int main(void)
{

    long number=get_long("enter card number");

    if((!(checksum(number))&&(count(number)>10))){
        if((count(number)>=13)&&(first(number)==4)){
            printf("VISA\n");
        }
        else if((count(number)==15)&&((two(number)==34)||(two(number)==37))){
            printf("AMEX\n");
        }
        else if((count(number)==16)&&((two(number)>=51)&&(two(number)<=55))){
            printf("MASTERCARD\n");
        }
        else{
            printf("INVALID\n");
        }
    }
    else{
        printf("INVALID\n");
    }


}

























long checksum(long number){
int sum=0;
int total=0;

int mul=1;
int l=even(number);
while(number!=0){
    number=number/10;
    int rem=number%10;
    number=number/10;
    mul=digit(rem*2);
    sum=sum+mul;

    }

    total=sum+l;
    int last=total%10;
    return last;
}









int digit(int number){
    int sum=0;
    while(number!=0){
        int rem=number%10;
        number=number/10;
        sum=sum+rem;
    }
    return sum;
}

long even(long number){
    int sum=0;
    while(number!=0){
        int rem=number%10;
        number=number/10;
        number=number/10;
        sum=sum+rem;
    }
    return sum;
}

long count(long number){
int c=0;
while(number!=0){
    int rem=number%10;
    number=number/10;
    c++;
}
return c;
}

long first(long number){
    int k=0;
 while(number!=0){
int rem=number%10;
number=number/10;
k=rem;
 }

return k;
}

long two(long number){
int k=count(number);
for(int i=1;i<=k-2;i++){
    number=number/10;

}

return number;
}

