#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long long giaiThua(int a){
    long long r=1;
    for(int i=1;i<=a;i++)r*=i;
    return r;
}
int a;
int main(){
    scanf("%d",&a);
    printf("%lld",giaiThua(a));
}
