#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a[4], solve = 0;
        for(int i=0; i<4; i++)
            cin >> a[i];
        if((a[1]+a[0]+a[1]) == a[2]){
            if((a[0]+a[1]+a[2]) == a[3])
                solve = max(solve, 3);
            else
                solve = max(solve, 2);
        }
        if(((a[2]-a[1])+a[2]) == a[3])
            solve = max(solve, 2);
        if((a[0]+a[1]+a[2]) == a[3])
            solve = max(solve, 2);
        else
            solve = max(solve, 1);
        
        cout << solve << endl;
    }

    return 0;
}