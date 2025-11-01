#include <bits/stdc++.h>
using namespace std;

void solution() {
    string a = "abcd";

    vector<string> v;

    for(size_t i=0;i<a.size();i++){
        string tmp;
        
        for(size_t j=i;j<a.size();j++){
            tmp+=a[j];
            v.push_back(tmp);
        }
    }

    for(auto l:v){
        cout<<l<<" ";
    }
}

int main(){
    int t;cin>>t;
    while(t--) solution();

    return 0;
}
