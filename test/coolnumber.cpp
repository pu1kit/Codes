#include<iostream>
#include<cstdio>
#include<vector>
#include<bitset>
#include<algorithm>

using namespace std;

int main() {
    int test;
    scanf("%d",&test);
    int num,k;
    while(test--) {
        int count=0;
        scanf("%d %d",&num,&k);
        string binary = bitset<8>(num).to_string();
        for(int i=0;i<sizeof(binary)-2;i++) {
            if(binary[i]=='1' && binary[i+1]=='0'&&binary[i+2]=='1')
                count++;
                
        }
        printf("%d\n",count);
    }
    return 0;
}