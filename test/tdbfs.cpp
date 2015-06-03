#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;



int main() {
	int t_graph;
	scanf("%d",&t_graph);
	while(t_graph--) {
		vector<vector<int> >gr(1000);
		int nodes;
		scanf("%d",&nodes);
		while(nodes--) {
			int s,adj;
			scanf("%d %d",&s,&adj);
			while(adj--) {
				int d;
				scanf("%d",&d);
				gr[s].push_back(d);
				gr[d].push_back(s);
			}
		}
	}

}