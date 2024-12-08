#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[100005],n;
void outPut(int a[],int n){
    for(int i=0;i<n;i++)printf("%d ",a[i]);
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    outPut(a,n);
}
