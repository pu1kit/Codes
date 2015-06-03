#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<algorithm>

using namespace std;
double s[128 * 1024];
int main() {
	unsigned long long  s1;
	int i=0;
	//vector<double > s ; 
	while (scanf("%llu",&s1) != EOF) {
		s[i++]=(double)sqrt(s1*1.0);
		
	}
	for(;i>0;i--) {
		printf("%.4lf\n",s[i]);
	}
return 0;
}