#include <bits/stdc++.h>
using namespace std;

void solution () {
    string a = "codeforce";
    string b = "for";

    int findValue = a.find(b);
    static const size_t npos = -1;
    
    if(findValue != npos) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;

}

int main() {
    int t; cin >> t;

    while(t--) solution();

    return 0;
}

