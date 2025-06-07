#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(){
  ll N,M =0;
	cin >> N >> M;
  vector<ll> L(M),R(M);
  rep(i,M){
    cin >> L[i] >> R[i];
  }
  
  vector<ll> wall(N);
  rep(i,M){
    wall[L[i]-1]++;     
    if(R[i] < N) {      
      wall[R[i]]--;     
    }
  }
  
  rep(i,N-1){
    wall[i+1] += wall[i];
  }
  auto min_it= min_element(wall.begin(), wall.end()) - wall.begin();
  cout << wall[min_it] << endl;
}
