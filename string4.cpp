#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1("Geeks");
    string s2("forGeeks");
    s1.append(s2);
    cout<<s1<<endl;
    string s3 = s1.substr(0,5);
    cout<<s3<<endl;
    return 0;
}
