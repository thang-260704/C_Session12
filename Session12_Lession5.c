#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int snt(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    if(snt(a))printf("%d la so nguyen to\n",a);
    else printf("%d khong phai la so nguyen to\n",a);
    if(snt(b))printf("%d la so nguyen to\n",b);
    else printf("%d khong phai la so nguyen to\n",b);
}
