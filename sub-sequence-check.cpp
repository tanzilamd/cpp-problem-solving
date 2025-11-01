#include <bits/stdc++.h>
using namespace std;

void solution() {
    string a = "codeforces";
    string b = "orcx";

    size_t i=0, j=0;

    while(i < a.size()){
        if(a[i] == b[j]) {
            j++;
        }

        i++;
    }

    if(j == b.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

int main(){
    int t;cin>>t;
    while(t--) solution();

    return 0;
}
