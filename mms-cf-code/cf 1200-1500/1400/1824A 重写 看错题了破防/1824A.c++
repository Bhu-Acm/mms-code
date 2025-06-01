//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
#define fi first
#define all(x) x.begin(),x.end()
#define se second
#define be begin()
#define en end()
#define endl <<"\n"
#define double long double
#define endd <<" "
using namespace std;
//atuo lfy 琴弦断了，缘也尽了，你也走了
bool cmp(ll a,ll b){
    return a>b;
}
void solve() {   
  int n,m;cin>>n>>m;
  ll x[m+10];
  map<ll,ll>mp;int cnt1=0;
  int l=INT_MAX,r=INT_MIN;int cnt=0;
  for(int i=1;i<=n;i++){
    cin>>x[i];
  }
  sort(x+1,x+n+1,cmp);
  for(int i=1;i<=n;i++){
    if(x[i]==-1){
        if(cnt==0){
            mp[m]++;
            r=m;cnt++;l=m;
        }else{
            if(l-1==1&&mp[1]!=0||mp[l-1]!=0||mp[1]!=0){
            }else{
                cnt++;
                mp[l-1]++;
                l--;
            }
        }
    }else if(x[i]==-2){
        if(cnt==0){
            l=1;r=1;
            cnt++;
            mp[1]=1;
        }else{
            if(r+1==m&&mp[m]!=0||mp[r+1]!=0||mp[m]!=0){
            }else{mp[r+1]=1;
                r++;cnt++;
                
            }
        }
    }else{
        if(mp[x[i]]==0){
            cnt1++;
            l=min((ll)l,x[i]);
            r=max((ll)r,x[i]);
            mp[x[i]]++;
        }
    }
  }
  cout<<cnt+cnt1 endl;
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
     cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}