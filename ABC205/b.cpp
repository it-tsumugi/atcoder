#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int n,cnt=0;
    cin >> n;
    vector<int> A(n);
    rep(i,n)cin >> A.at(i);
    int ans_f[n];

    for(int i=1; i<n+1;i++){
        rep(j,n){
            if(A.at(j) == i){
              ans_f[i-1]=1; 
            }
        }
    } 
    rep(i,n){
        if(ans_f[i] == 1) cnt++;
    } 
    if(cnt == n) 
        cout << "Yes" <<endl;
    else
        cout << "No" <<endl;
    return 0;
}