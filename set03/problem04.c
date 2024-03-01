#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main(){
    int n = input();
    int fibo = find_fibo(n);
    output(n,fibo);
}
int input(){
    int c;
    printf("n: ");
    scanf("%d",&c);
    return c;
}
int find_fibo(int n){
    int fib[100]={1,1};
    for(int i=1;i<n-1;i++){
        fib[i+1]=fib[i]+fib[i-1];
    }
    return fib[n-1];
}
void output(int n, int fibo){
    printf("fib: %d",fibo);
}