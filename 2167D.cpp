#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


long long gcd(long long a , long long b){
    return b == 0 ? a : gcd(b , a% b);
}

int main(){
    // no of test case
    int t ;
    cin >> t;

    while(t--){
        // vector input karnege 
        int n ;
        cin >> n ;
        vector<long long> a(n);

        for(int i = 0 ; i< n ; i++){
            cin >> a[i];
        }

        // gcd check 
        long long g = a[0];
        for(int i= 1 ; i< n ; i++){
            g = gcd(g, a[i]);
        }

        if(g == 1){
            cout << 2 << endl;
            continue;
        }

        long long x = 2;
        while(x < 1e18){
            if(gcd(x,g) == 1){
                cout << x << endl;
                break;
            }
            x++ ;
        }
        if(x > 1e18) cout << -1 << endl;
    }
    return 0;
}