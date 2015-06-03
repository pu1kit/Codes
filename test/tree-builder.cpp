#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;


void init_tree(int n, int size, int *arr,int start) {
	if(arr[start]==-1) {
		arr[start]=n;
		return;
	}
	if(n<arr[start]) init_tree(n,size,arr,2*start+1);
	else init_tree(n,size,arr,2*start+2);
}

void inorder(int n,int *arr) {
	if(arr[n]==-1) {
		printf("-");
		return;
	}
	printf("(");
	inorder(2*n+1,arr);
	printf(",%d,",arr[n]);
	inorder(2*n+2,arr);
	printf(")");
}

int main() {
	int test,n;
	scanf("%d",&test);
	int arr[4*test];
	memset(arr,-1,sizeof(arr));
	for(int i=0;i<test;i++) {
		scanf("%d",&n);
		init_tree(n,4*test,arr,0);
		}
	inorder(0,arr);
	return 0;

}