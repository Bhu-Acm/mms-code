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
  string s;
  cin>>s;
  string t;
  string s1=s;
  sort(all(s1));
  if(s1==s){
    cout<<"0\n";return ;
  }
  char c='a';int f=0;
  int flag=0;
  for(int i=0;i<s.size();i++){
    if(s[i]>c){
        c=s[i];
        f=i;
    }
  }
  vector<ll>v;
  for(int i=f;i<s.size();i++){
    while(t.size()!=0&&s[i]>t[t.size()-1]){
        t.pop_back();v.pop_back();
    }
    t.push_back(s[i]);
    v.push_back(i);
  }
  int a=0;int b=v.size()-1;int w=0;
  for(int i=0;a!=b&&a<b;i++){
    swap(s[v[a]],s[v[b]]);
   // if(s[v[a]]==s[v[b]])w++;
    a++;b--;
  }
  string s2=s;
  sort(all(s2));
  if(s2!=s){
    cout<<-1 endl;return ;
  }
  for(int i=0;i<t.size();i++){
    if(t[i]!=c){
        w=i;break;
    }
  }
  cout<<t.size()-w endl;
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