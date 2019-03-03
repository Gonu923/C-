#include<bits/stdc++.h>
using namespace std;
int main(){
    string s("GeeksforGeeks");
    int ind = s.find("for");
    cout<<"for found at index: "<<ind<<endl;
    s.replace(ind, 3, "are");
    cout<<s<<endl;
    return 0;
}
