#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>

using namespace std;

int a[100000];


int main() {
    memset(a,0,sizeof(a));
    int n;
    a[0] = 0;
    a[1] = 1;
    for(int i= 2;i<=99999;i++) {
         if(i%2==0) { 
                 a[i] = a[i/2];
            }
            else {a[i] = a[(i-1)/2]+a[(i+1)/2];
        
    }}
    while(scanf("%d",&n)) {
        if(n==0) return 0;
        int x = -1;
        for(int i=0;i<=n;i++){
            x = max(x,a[i]);
        }
        printf("%d\n",x);
    }
    return 0;
}