#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,ns;
    cin>>s1;
    for(int i = s1.size()-1; i>=0; i--){
        ns += s1[i];
    }
    if(s1==ns){
        cout<<"Palindrome Word"<<endl;
    }else{
        cout<<"Not a Palindrome Word"<<endl;
    }
    return 0;
}
