#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string s=get_string("enter your message\n");
    int len=strlen(s);
    int k[BITS_IN_BYTE];
    for(int i=0;i<len;i++){
        int a=s[i];
        for(int j=0;j<BITS_IN_BYTE;j++)
        {
            int rem=a%2;
            a=a/2;
            k[BITS_IN_BYTE-1-j]=rem;
        }


    for(int l=0;l<BITS_IN_BYTE;l++){
        print_bulb(k[l]);
    }
      printf("\n");
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
