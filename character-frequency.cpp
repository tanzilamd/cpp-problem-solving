#include <bits/stdc++.h>
using namespace std;

void solution() {
    string word="Supercalifragilisticexpialidocious";

    vector<int>letters(26, 0);

    for(char w:word) {
        if(isalpha(w)){
            w = tolower(w);
            letters[w - 'a']++;
        }
    }


    for(int i=0;i<26;i++)
        cout<<(char)toupper('a'+i)<<" = "<<letters[i]<<endl;

}

int main(){
    int t;cin>>t;
    while(t--) solution();

    return 0;
}
