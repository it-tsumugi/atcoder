#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll N=0;
	cin >> N;
  vector<ll> A(N);
  rep(i,N){
    cin >> A[i];
  }
  vector<ll> C(N);
  sort(A.begin(), A.end());
  A.erase(unique(A.begin(), A.end()), A.end());

  ll M = A.size();
  cout << M << endl;
  rep(i,M){
    cout << A[i] << " ";
  }
  cout << endl;
}
