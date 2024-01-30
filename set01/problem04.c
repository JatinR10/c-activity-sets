#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int a,b;
    input(&a,&b);  
    int sum=0;
    add(&a,&b,&sum);
    output(&a,&b,&sum);
}
void input(int *a, int *b)
{
    int x;
    printf("Enter the numbers : \n");
    scanf("%d",&x);
}
void add(int a, int b, int *sum)
{
    int sum=0;
    sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("The sum is %d\n", &sum);
}
