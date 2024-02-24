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
    int gcd = 1;
    for(int i=1;i<a && i<b/2+1;i++) {
        if(a%i==0 && b%i==0){
            gcd=i;
      
        }
    }
 return gcd;
}
void output(int a, int b, int gcd){
    printf("gcd: %d",gcd);
}