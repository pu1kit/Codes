#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;



int invcnt( long long arr[], int start,int end){
    
    int mid = (start+end)/2;
    
    if(start>end) return 0;
    int ans = 0;
    if(arr[start]>arr[end]) ;
    
    int left = invcnt(arr,start,mid);
    int right = invcnt(arr,mid+1,end);
    
    return left+right;
}













int main() {
    
    int test;
    scanf("%d",&test);
    while(test--) {
        long long n;
        scanf("%llu",&n);
        
        long long arr[n];
        
        for(int i =0;i<n;i++) {
            
            scanf("%llu",&arr[i]);
        }
        
        int ans = invcnt(arr,0,n-1);
        
        printf("%d",ans);
    }
    
    
    return 0;
}