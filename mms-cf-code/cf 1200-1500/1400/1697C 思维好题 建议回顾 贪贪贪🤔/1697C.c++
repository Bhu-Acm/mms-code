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
void solve() {   
  int n;cin>>n;
  string s,s1;cin>>s>>s1;
  map<char,ll>mp,mp1;
  for(int i=0;i<n;i++){
    mp[s[i]]++;
    mp1[s1[i]]++;
  }
  if(mp['a']!=mp1['a']||mp['b']!=mp1['b']||mp['c']!=mp1['c']){
    cout<<"NO\n";return ;
  }
  if(s==s1){
    cout<<"YES\n";
  }else{
    string t,t1;
    vector<ll>a,c,a1,c1;
    for(int i=0;i<n;i++){
        if(s[i]!='b')t.push_back(s[i]);
        if(s1[i]!='b')t1.push_back(s1[i]);
        if(s[i]=='a')a.push_back(i);
        if(s[i]=='c')c.push_back(i);
        if(s1[i]=='a')a1.push_back(i);
        if(s1[i]=='c')c1.push_back(i);
    }
    if(t!=t1){
        cout<<"NO\n";return ;
    }
    for(int i=0;i<a.size();i++){
        if(a1[i]<a[i]){
            cout<<"NO\n";return ;
        }
    }
    for(int i=0;i<c.size();i++){
        if(c1[i]>c[i]){
            cout<<"NO\n";return ;
        }
    }
    cout<<"YES\n";
    // map<char,ll>t,t1;
    // for(int i=0;i<n-1;i++){
    //     t[s[i]]++;
    //         t1[s1[i]]++;
    //     if(s[i]=='b'&&s[i+1]=='a'||s[i]=='c'&&s[i+1]=='b'||s[i]=='a'&&s[i+1]=='c'||s[i]=='c'&&s[i+1]=='a'){
    //         if(t!=t1){
    //             cout<<"NO\n";return ;
    //         }
    //         t.clear();t1.clear();
    //     }//else{
            
    //     //}
    // }
    // t[s[n-1]]++;t1[s1[n-1]]++;
    // if(t!=t1){
    //             cout<<"NO\n";return ;
    //         }
    //         cout<<"YES\n";
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