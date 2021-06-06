#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long ll;

int main(void){
    int N;
    cin >> N;
    int A[N];
    rep(i,N){cin >> A[i];}
    int cnt=0;

    rep(i,N){
        if(A[i]>10){
            cnt += (A[i]-10);
            A[i] = 10;
        }
    }
    cout << cnt << endl;
    return 0;
}