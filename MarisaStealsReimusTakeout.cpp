#include <iostream>
using namespace std;

int main(){
    int t,n,number;
    cin>>t;
    for(int i=0;i<t;i++){
        int count=0;
        int zero=0,one=0,two=0;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>number;
            if(number==0){zero++;}
            else if(number==1){one++;}
            else if(number==2){two++;}
        }
        int pairs=min(one,two);
        one-=pairs;
        two-=pairs;
        count=zero+pairs+(one/3)+(two/3);
        cout<<count<<endl;
    }
    return 0;
}