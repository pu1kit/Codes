#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>
#define ull unsigned long long
#define ld long double
#define ll long long
#define M 1000000009
#define N 100008
#define pll pair<ll,ll>
#define pb(x) push_back(x)
#define mset(a) memset(a,0,sizeof(a))
#define f(i,n) for(i=0;i<n;i++)
#define foi(i,j,k) for(i=j;i<k;i++)
#define mll map<ll,ll>
#define foe(i,j,k) for(i=j;i<=k;i++)
using namespace std;
 
 long long dp[55555][555];
 
 
  ll least(ll low,ll high,ll k,ll *cost,pll *a, int bitmask)
  {  
      
    if(bitmask == k) return 0;
    int i;
     
    long long ans=0,cumin=0;
    //if(k==0)return 0;
     
    if(dp[low][bitmask]!=-1)return dp[low][bitmask];
    
    ans = least(low+1,high,k-cost[low],cost,a,bitmask|(1<<cost[low]));
    if(cost[low]<=k){
    if(((1<<cost[low])&bitmask)==0) {
        
        long long temp = a[low].first + least(low+1ll,high,k-cost[low],cost,a,bitmask|(1<<cost[low]));
        ans = max(ans,temp);}
    }
    return dp[low][bitmask] = ans; /*
    for(i=low;i<=high;i++)
    {  
      if(cost[i]<=k){ 
       
      cumin=a[i].first+least(i+1,high,k-cost[i],cost,a);}
       mins=min(mins,cumin);
    }
    dp[low][k]=mins;
     
    return mins;*/
  }

  int main()
  {
    ll t,n,k,m,i,mem,rate,j,ans;
  cin>>t;
    while(t--)
    {
    memset(dp,-1,sizeof(dp));
    cin>>n>>k>>m;
    pll a[n];ll l[m],r[m],c[m],ming[m];
    rate=0;
    foe(i,1,n){cin>>a[i].first;a[i].second=i;rate+=a[i].first;}
     foe(i,1,m)
    {
      cin>>l[i]>>r[i]>>c[i];
    }
 
     sort(a+1,a+n+1);
      
     foe(i,1,n)if(a[i].first>=0){mem=i;break;}
     mem--;
      
      foe(i,1,mem)
     {
      ming[i]=INT_MAX;
      foe(j,1,m)
      {
        if(a[i].second>=l[j] && a[i].second<=r[j])
        {
           
          ming[i]=min(ming[i],c[j]);
           
        }
      }
     }
      
     ans=0;
    ans=least(1,mem,k,ming,a,0);
    rate=rate-ans;
    cout<<rate<<" "<<ans<<endl;
   }
   return 0;
  }  