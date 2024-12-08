#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a,b;
int sum(int a, int b){
    return a+b;
}
int main(){
    scanf("%d%d",&a,&b);
    printf("%d ",sum(a,b));
}
