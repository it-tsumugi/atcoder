#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;
#define MAX 1000

int main(){
  ll n,x=0;
  cin >> n >>x;
  vector<ll> a(n);
  rep(i,n)cin >> a.at(i);

  vector<short>flagArray(n);
  ll index =x-1,cnt=0;
  while(1){
    if(flagArray.at(index) == 0){
      cnt++;
      flagArray.at(index) =1;
      index = a.at(index) -1;
    }
    else if(flagArray.at(index) == 1){
      break;
    }
  }
  cout << cnt <<endl;
  return 0;
}