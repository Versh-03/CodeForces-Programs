#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    unordered_set<char> st;
    cin>>str1;
    for(char x: str1){
        st.insert(x);
    }
    cout<<(st.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}
