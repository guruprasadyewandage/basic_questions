
#include<stdio.h>
#include<string.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  
}

int main(){
int x=10;
int y=20;

swap(&x,&y);
  printf("x= %d, y = %d",x,y);
}
