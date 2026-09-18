#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    char a,b;
    cin >> str1 >> str2;

    for(int i = 0; i < str1.size(); i++){
        a=tolower(str1[i]);
        b=tolower(str2[i]);
        if(a!=b){
            cout<<(a>b?1:-1);
            return 0;
        }
    }

    cout << 0;
    return 0;
}
