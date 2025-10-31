#include<iostream>
#include <vector>
#include <map>
using namespace std ;



int main(){
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        for(int i = 0 ; i< n ; i++){
            cin >> a[i];
        }

        map<int,int> freq;
        for(int x : a){
            freq[x]++;
        }

        vector<int> f;
        for(auto &p : freq){
            f.push_back(p.second);
        }

        int ans = 0;
        for(int k = 1 ; k<= n ; k++){
            int cnt = 0;
            for(int x : f) if(x >= k) cnt++;
            ans = max(ans , cnt*k);
        }

        cout << ans << endl;
    }
}