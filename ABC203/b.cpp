#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<n+1;++i)

int main(){
    int N,K,sum=0;
    cin >> N >> K;

    rep(i,N){
        rep(j,K){
            sum+=100*i +j;
        }
    }
    cout << sum <<endl;
    return 0;
}