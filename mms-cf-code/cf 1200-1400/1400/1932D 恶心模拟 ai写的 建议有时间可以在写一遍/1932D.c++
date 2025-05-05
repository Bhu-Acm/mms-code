//恶心模拟题 ai写的不想写了
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

char t; // 王牌花色
map<char, int> val = {
    {'2',2}, {'3',3}, {'4',4}, {'5',5},
    {'6',6}, {'7',7}, {'8',8}, {'9',9}
};

void solve() {   
    int n; cin>>n;
    cin>>t;
    vector<string> gC, gD, gH, gS;
    for(int i=0;i<2*n;i++){
        string a; cin>>a;
        if(a[1]=='C') gC.push_back(a);
        else if(a[1]=='D') gD.push_back(a);
        else if(a[1]=='H') gH.push_back(a);
        else /* 'S' */  gS.push_back(a);
    }
    // 按点数升序
    auto cmp = [&](const string &a, const string &b){
        return val[a[0]] < val[b[0]];
    };
    sort(all(gC), cmp);
    sort(all(gD), cmp);
    sort(all(gH), cmp);
    sort(all(gS), cmp);

    vector<string>* gt;
    if(t=='C') gt = &gC;
    else if(t=='D') gt = &gD;
    else if(t=='H') gt = &gH;
    else               gt = &gS;

    // 统计非王牌花色奇数组数
    int odd = 0;
    if(t!='C' && gC.size()%2) odd++;
    if(t!='D' && gD.size()%2) odd++;
    if(t!='H' && gH.size()%2) odd++;
    if(t!='S' && gS.size()%2) odd++;
    if(odd > gt->size()){
        cout<<"IMPOSSIBLE" endl;
        return;
    }

    vector<pair<string,string>> ans;
    // 先配非王牌花色
    auto do_pair = [&](vector<string> &v){
        int m = v.size();
        if(m%2==0){
            for(int i=0;i<m;i+=2)
                ans.emplace_back(v[i], v[i+1]);
        } else {
            for(int i=0;i+1<m;i+=2)
                ans.emplace_back(v[i], v[i+1]);
            // 最后一张与一个王牌配
            ans.emplace_back(v.back(), (*gt)[0]);
            gt->erase(gt->be); // 用掉这个王牌
        }
    };
    if(t!='C') do_pair(gC);
    if(t!='D') do_pair(gD);
    if(t!='H') do_pair(gH);
    if(t!='S') do_pair(gS);

    // 再配剩余的王牌内部
    int m = gt->size();
    for(int i=0;i<m;i+=2)
        ans.emplace_back((*gt)[i], (*gt)[i+1]);

    // 输出结果
    for(auto &p : ans){
        cout<<p.fi endd <<p.se endl;
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
