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
//因为1整除任何数 可以考虑再奇数或者偶数位置全放一 其他和原数组相等
//贪心
void solve() {   
    int n;cin>>n;
    ll x[n+10];
    vector<ll>ou,ji;ll su=0;
    ll sum=0,sum1=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];su+=x[i];
        if(i%2==0){
            ou.push_back(x[i]);
            
        }else{
            ji.push_back(x[i]);
        }
    }
    for(auto it:ou){
        sum+=it;
    }
    for(auto it:ji){
        sum1+=it;
    }
    if(abs(su-sum-(ll)ji.size())*2<su){int t=0;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                cout<<ou[t] endd;t++;
            }else{
                cout<<1 endd;
            }
        }
        cout endl;
        return ;
    }
    if(abs(su-sum1-(ll)ou.size())*2<su){
        int t=0;
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                cout<<ji[t] endd;t++;
            }else{
                cout<<1 endd;
            }
        }
        cout endl;return ;
    }

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