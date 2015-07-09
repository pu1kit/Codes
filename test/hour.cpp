#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int f;
    scanf("%d",&f);
    int r = 12-f;
    if(r*45>240) printf("NO\n");
    else printf("YES\n");
    return 0;
}