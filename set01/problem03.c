#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a= input();
    int b= input();
    int sum=0;
    sum=add(a,b);
    output(a,b,sum);
}
int input()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    return x;
}

int add(int a, int b)
{
    int sum=a+b;
    return sum;
}

void output(int a, int b, int sum)
{
    printf("The sum is : %d \n", sum);
}