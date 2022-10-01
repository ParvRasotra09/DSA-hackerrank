#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> a;
    int N,X;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>X;
        a.push_back(X);
    }
    cin>>X;
    for(int i=X-1;i>=0;i--){
        cout<<a[i]<<" ";
    }
    for(int i=X;i<N;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}





