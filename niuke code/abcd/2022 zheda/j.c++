//fly!
#include<bits/stdc++.h>
#define ll long  long
#define ull unsigned long long
#define itn int 
#define mian main
#define N 1000010
#define yes true
#define no false
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
//ll x[500010] = { 0 };
void solve() {   
  int n;cin>>n;
    ll x[n+10];
    ll ji=0,ou=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
        if(x[i]%2==0){
            ou++;
        }else{
            ji++;
        }
    }
    if(ji%2==0){
        cout<<"Bob";
    }else{
        cout<<"Alice";
    }
}
int main() {
    std::ios::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    int T = 1;
    // scanf("%d", &T);
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}