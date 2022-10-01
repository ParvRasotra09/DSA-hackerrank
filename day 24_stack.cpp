#include <bits/stdc++.h>

using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int T;

    string A,B;

    cin>>T;

    if(T<1){

        cout<<"Invalid Input";

        return 0;

    }

    while(T--){

        cin>>A;

        B=A;

        reverse(B.begin(),B.end());

        if(A==B)cout<<"Yes"<<endl;

        else cout<<"No"<<endl;

    }

    return 0;

}
  