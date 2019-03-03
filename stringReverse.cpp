#include<bits/stdc++.h>
using namespace std;
int main(){
    string s("Hello");
    string s2("");
    for(int i = s.size()-1; i>=0 ; i--){
        s2 +=s[i];
    }
    cout<<s2<<endl;
    return 0;
}
