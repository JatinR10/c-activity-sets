#include <stdio.h>
void input(int *a, int *b);
void add(int a, int b, int *sum);
void output(int a, int b, int sum);
int main()
{
    int a,b;
    input(&a,&b);  
    int sum=0;
    add(a,b,&sum);
    output(a,b,sum);
    return 0;
}
void input(int *a, int *b)
{
  printf("Enter the first number: ");
  scanf("%d",a);
  printf("Enter the second number: ");
  scanf("%d",b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("The sum is %d\n", sum);
}
