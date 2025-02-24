#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int x[n], y[n], sum = 0;
        for (int i=0; i<n; i++)
            cin >> x[i] >> y[i];
        for (int i=1; i<n; i++)
            sum += (2*m-x[i]-y[i])*2;

        cout << (4*n*m - sum) << endl;
    }

    return 0;
}