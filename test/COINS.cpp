#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>

using namespace std;

int main() {
	
	int t;
	while(scanf("%d",&t)!=EOF) {
		int s[3];
		s[0] = t/2;
		s[1] = t/3;
		s[2] = t/4;
		int dp[t] ;
		for(int i=0;i<t;i++) dp[i] = i;
		dp[0]=0;
		for(int i=1;i<= t;i++) {
			for(int j=0;j<3;j++) {
				if(i-s[j]>=0)
				dp[i] = max(dp[i],dp[i-s[j]]+s[j] ); 
			}
		}
		printf("%d\n",dp[t]);
	}
	
return 0;
}