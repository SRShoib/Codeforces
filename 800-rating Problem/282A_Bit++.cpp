#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s == "X++" || s == "++X")
            count++;
        else
            count--;
    }
    cout << count << endl;

    return 0;
}