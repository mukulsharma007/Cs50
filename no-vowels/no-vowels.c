// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch


#include <cs50.h>
#include <stdio.h>
#include<string.h>
string replace(string w);

int main(int argc, string argv[])
{
if(argc!=2){
    printf("error\n");
    return 1;
}
else{
    printf("%s\n",replace(argv[1]));
}
}

string replace(string w)
{

    int len=strlen(w);
    char k[len];
    for(int i=0;i<len;i++){
        switch(w[i]){
            case 'a':
            w[i]='6';
            break;
            case 'e':
            w[i]='3';
            break;
            case 'i':
            w[i]='1';
            break;
            case 'o':
            w[i]='0';
            break;
            case 'u':
            w[i]='u';
            break;
            default:
            w[i]=w[i];


        }

        }


return w;
}