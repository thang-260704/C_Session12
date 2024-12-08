#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int a[100005],n;
int maxArr(int a[], int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++)max=fmax(max,a[i]);
    return max;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("%d",maxArr(a,n));
}
