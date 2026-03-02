#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int h;
  do{
    h=get_int("enter the height\n");
  }while((h<1)||(h>8));
  for(int i=1;i<=h;i++){
    for(int j=1;j<=h;j++){
      if(j>=h+1-i){
        printf("#");
      }
      else{
        printf(" ");
      }
    }
    for(int j=h+1;j<=h*2+2;j++){
      if((j<=(h+2)+i)&&(j!=h+1)&&(j!=h+2)){
        printf("#");
      }
      else if(j<=h+2){
        printf(" ");
      }
    }


    printf("\n");
  }
}