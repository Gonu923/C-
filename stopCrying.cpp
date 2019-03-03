#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        if(s==("toy")){
            cout<<"cry"<<endl;
        }else if(s==("doll")){
            cout<<"play"<<endl;
        }
    }

    return 0;
}
