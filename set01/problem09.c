#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
    float n , sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}
float input()
{
    float n ;
    printf("Enter a number: \n");
    scanf("%f",&n);
    return n;
}
float square_root(float n){
    float x=n/2;
    float y=0.00001;

    while ((x*x-n)>y || (n-x*x)>y)
    {
      x=0.5*(x+n/x);
    }
    return x;
}

void output(float n , float sqrroot)
{
    printf("Square root of %f is %f",n,sqrroot);
}