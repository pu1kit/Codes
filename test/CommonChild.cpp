#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int lcs(string const &a,string const &b,int n,int m) {
if(m==0 || n==0) return 0;
if(a[n-1] == b[m-1]) return 1+lcs(a,b,n-1,m-1);
else return max(lcs(a,b,n,m-1),lcs(a,b,n-1,m));
}

int main() {
	string a,b;
	cin>>a;
	cin>>b;
	int len = a.size();
	int ans = lcs(a,b,len,len);
	cout<<ans<<endl;
	return 0;
}