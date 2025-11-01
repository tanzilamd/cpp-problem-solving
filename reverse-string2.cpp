#include <bits/stdc++.h>
using namespace std;

void solution() {
    string s = "Hello";

    int l = s.size() - 1;
    int i = 0;

    while(i < l) {
        swap(s[i], s[l]);

        i++;
        l--;
    }

    cout<<s<<endl;
}

int main(){
    int t;cin>>t;
    while(t--) solution();

    return 0;
}
