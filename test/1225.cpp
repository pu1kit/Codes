#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

int red = 0;
int blue = 2;
int white = 1;

long dp[50][3];

long solve(int index,int color) {
	if(index<=0) return 0;
	if (index == 1) {
		if(color==blue) return 0;
		else return 1;
	}
	
	if(dp[index][color] !=-1)
		return dp[index][color];
	if(color==blue) {
		dp[index][color] = solve(index-1,red)+solve(index-1,white);
		
	}
	else if(color==red) {
		dp[index][color]=solve(index-1,white)+solve(index-2,white);
	}
	else if(color==white) {
		dp[index][color]=solve(index-1,red)+solve(index-2,red);
	}
	return dp[index][color];
}


int main() {
	for(int i=0;i<50;i++) {
		for(int j=0;j<3;j++) {
			dp[i][j]=-1;
		}
	}
	
	long x;
	cin>>x;
	long anss = solve(x,red)+solve(x,white);
	cout<<anss<<endl;
	return 0;

}