#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main()
{
int a,b,c; 
a = input_side();
b = input_side();
c = input_side();
int isscalene = check_scalene(a,b,c);
output(a,b,c,isscalene);
return 0;
}
int input_side()
{
    int x;
    printf("Enter the value");
    scanf("%d", &x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    int isscalene;
    if (a!=b && a!=c && b!=c)
    {
        isscalene = 1;
        return isscalene;
    }
    else
    {
        isscalene=0;
        return isscalene;
    }

}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    
printf("The triangle is scalene");
    
else if (isscalene==0)

printf("The triangle is not scalene");
             
}