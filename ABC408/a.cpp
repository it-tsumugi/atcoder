#include <iostream>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll N,S =0;
	cin >> N >> S;
  vector<ll> T(N+1);
  T[0] = 0;
  rep(i,N){
    cin >> T[i+1];
  }

  ll diff = 0;
  bool flag = false;

  rep(i, N){
    diff = T[i+1] - T[i];
    if(diff >= S + 0.5){
      flag = true;
      break;
    }
  }
  if (flag) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
