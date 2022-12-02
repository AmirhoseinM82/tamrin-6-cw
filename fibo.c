#include<stdio.h>

int mem[2000];

int fibo(int n){
     if(n==1 || n==2)
          return 1;
     if(mem[n]>0)
          return mem[n];
     mem[n]=fibo(n-1)+fibo(n-2);
     return mem[n];


int main(){
   int n;
     scanf("%d",&n);
    int x=fibo(n);
      printf("%d",x);
return 0;
}
