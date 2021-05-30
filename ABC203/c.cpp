#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

struct data_t{
    long long int anum;
    long long int bnum;
};

int main(){
    long long int N,K;
    cin >> N >> K ;
    vector <data_t> data(N);
    rep(i,N){cin >> data[i].anum >> data[i].bnum;}

    sort(data.begin(),data.end(), 
        [](const data_t& a, const data_t& b){return a.anum < b.anum;});
    
    rep(i,N){
        if(K - data[i].anum < 0) break;
        K += data[i].bnum;
    }
    cout << K << endl;
    return 0;
}