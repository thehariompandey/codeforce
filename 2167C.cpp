#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector<int> a(n);
        bool Odd = false , Even = false;

        for(int i = 0; i< n ; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) Even = true;
            else Odd = true;
        }

        // agar odd or even exist karte hai mtlb same parity ke nhi hai mean sort ho sakta hai 
        if(Odd && Even){
            sort(a.begin() , a.end());
        }

        for(int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}