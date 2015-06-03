#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main() {
	int test;
	scanf("%d",&test);
	string s;
	vector<int> ans;
	while(test--) {
		getline(cin,s);
		int a=0;
		for(int unsigned i=0;i<s.size();i++) {
			if(s[i]=='a' ||s[i]=='o' ||s[i]=='u' ||s[i]=='i' ||s[i]=='e' ||s[i]=='y') {
				a++;
			}
		}
		ans.push_back(a);
	}
	for(int unsigned i=0;i<ans.size();i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}