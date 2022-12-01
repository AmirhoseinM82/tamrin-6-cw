#include<stdio.h>

void ShowFibNth(long int a, long int b){

     printf("%d",a);
     if(b-a>0)
     return ShowFibNth(b-a,a);
}


int main(){
    long int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    ShowFibNth(a,b);
return 0;
}
