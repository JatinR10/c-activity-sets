#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
    int a = input();
    int b = input();
    int gcd = find_gcd(a,b);
    output(a,b,gcd);
}
int input() {
    int num;
    printf("Please enter an integer: ");
    scanf("%d", &num);
    return num;
}
int find_gcd(int a, int b) {
 int temp;
 while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
 }  
 return a;
    }

void output(int a, int b, int gcd){
    printf("gcd: %d",gcd);
}