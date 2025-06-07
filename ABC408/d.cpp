#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  
  ll T = 0;
  cin >> T;
  vector<ll> N(T);
  vector<string> S(T);
  rep(i,T){
    cin >> N[i];
    cin >> S[i];
  }
  vector<ll> ans(T);
  
  rep(t,T){
    const string& s = S[t];
    ll n = N[t];
    vector<int> ones;
    ones.reserve(n);
    rep(i,n){
      if(s[i] == '1'){
        ones.push_back(i);
      }
    }
    
    if(ones.empty()){
      ans[t] = 0;
      continue;
    }
    ll k = ones.size();
    ll min_ops = k; 
    ll max_f = ones[0];
    rep(j, k){
      ll f_j = ones[j] - 2 * j;
      ll total_ops = f_j - max_f + k - 1;
      min_ops = min(min_ops, total_ops);
      max_f = max(max_f, f_j);
    }
    ans[t] = min_ops;
  }

  rep(i,T){
    cout << ans[i] << endl;
  }
  return 0;
}
