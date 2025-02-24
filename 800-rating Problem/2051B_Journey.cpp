#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int temp = (n/(a+b+c));
        if(temp*(a+b+c) >= n)
            cout << temp*3 << endl;
        else if((temp*(a+b+c)+a) >= n)
            cout << (temp*3)+1 << endl;
        else if((temp*(a+b+c)+a+b) >= n)
            cout << (temp*3)+2 << endl;
        else if((temp*(a+b+c)+a+b+c) >= n)
            cout << (temp*3)+3 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}