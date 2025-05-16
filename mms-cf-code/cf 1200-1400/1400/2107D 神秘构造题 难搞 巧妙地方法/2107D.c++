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
//每个集合对应的i 先插入i 
//然后遍历二维数组 遇到1 则对应j集合插入i
void solve() {   
  int n;cin>>n;
  char x[n+10][n+10];
  vector<ll>v[110];
  for(int i=1;i<=n;i++){
    v[i].push_back(i);
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>x[i][j];
        if(x[i][j]=='1'){
            v[j].push_back(i);
        }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<v[i].size() endd;
    for(int j=0;j<v[i].size();j++){
        cout<<v[i][j] endd;
    }cout endl;
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