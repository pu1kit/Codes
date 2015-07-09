#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<vector>
#include<cmath>

using namespace std;

int main() {
    unsigned long long x;
    double a[128*1024]; 
    int i=0;
    while(scanf("%llu",&x)!=EOF) {
        
        a[i++]=(double)sqrt(x*1.0);
    }
    i--;
    for(;i>=0;i--){
        printf("%.4lf\n",a[i]);
    }
    return 0;
}