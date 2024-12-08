#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int checkSHH(int a){
    int s=0;
    for(int i=1;i<=a/2;i++)if(a%i==0)s+=i;
    if(s==a)return 1;
    else return 0;
}
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    if(checkSHH(a))printf("%d la so hoan hao\n",a);
    else printf("%d khong phai la so hoan hao\n",a);
    if(checkSHH(b))printf("%d la so hoan hao\n",b);
    else printf("%d khong phai la so hoan hao\n",b);
}
