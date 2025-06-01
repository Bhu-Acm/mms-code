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
//找最大字段和
void solve() {   
  int n;cin>>n;
    string s;cin>>s;
    map<char,ll>mp;ll minn=-1;
    s=" "+s;
    ll sum=0;
    for(int i=1;i<=n;i++){
        if(sum>0){
            if(s[i]=='1')sum++;
            else sum--;
        }else{
            if(s[i]=='1')sum=1;
            else sum=-1;
        }
        minn=max(minn,sum);
        mp[s[i]]++;
    }
    if(minn<0)minn=0;
    cout<<mp['1']-minn endl;
    // ll sum1[n+10]={0};//前缀
    // ll sum0[n+10]={0};
    // ll su1[n+10]={0};//后缀
    // ll su0[n+10]={0};
    // for(int i=1;i<=n;i++){
    //     mp[s[i]]++;
    //     sum1[i]=sum1[i-1]+(s[i]=='1');
    //     sum0[i]=sum0[i-1]+(s[i]=='0');
    // }
    // if(mp.size()==1){
    //     cout<<0 endl;return ;
    // }
    // for(int i=n;i>=1;i--){
    //     su1[i]=su1[i+1]+(s[i]=='1');
    //     su0[i]=su0[i+1]+(s[i]=='0');
    // }
    // ll minn=INT_MAX;
    // for(int i=1;i<=n;i++){
    //     ll t=sum0[i-1]+su1[i];
    //     ll t1=sum0[i]+su1[i+1];
    //     ll t2=sum1[i-1]+su0[i];
    //     ll t3=sum1[i]+su0[i+1];
    //     t=min(t,t1);t2=min(t2,t3);
    //     ll minn1=min(t,t2);
    //     minn=min(minn1,minn);
    // }
    // minn=min(minn,min(mp['1'],mp['0']));
    //cout<<minn endl;
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