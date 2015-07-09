#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
    int test,k=0,t;
    scanf("%d",&test);
    int arr[test+1];
    
    for(int i=0;i<test;i++){
        scanf("%d",&arr[i]);
        arr[i] += k;
        k = arr[i];
    }
    
    int min2  = 99999999;
    for(int i=1;i<test;i++) {
            min2 = min(min2,arr[i]-arr[i-1]);
    }
    printf("%d\n",min2);
    return 0;
}