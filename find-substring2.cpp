#include <bits/stdc++.h>
using namespace std;

bool isSubStr(string a, string b){
    for(int i=0;i<=a.size()-b.size();i++){ 
        if(a.substr(i, b.size()) == b){
            return true;
        }

    }

    return false;
}

void solution () {
    string a = "codeforce";
    string b = "for";

    bool ifExist = isSubStr(a, b);

    if(ifExist) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;

}

int main() {
    int t; cin >> t;

    while(t--) solution();

    return 0;
}

