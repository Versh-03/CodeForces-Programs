#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
    vector<int> nums;
    string str1, str2;
    cin >> str1;

    for(char x : str1){
        if(isdigit(x)){
            nums.push_back(x - '0');
        }
    }

    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(i > 0) cout << '+';
        cout << nums[i];
    }

    return 0;
}
