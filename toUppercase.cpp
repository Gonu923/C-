#include<bits/stdc++.h>
using namespace std;
void convert(string& s){
    for(int i = 0; i<s.length(); i++){
        s[i]=toupper(s[i]);
    }
}
int main(){
    string s;
    getline(cin,s);
    convert(s);
    cout<<s<<endl;
    return 0;
}
