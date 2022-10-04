#include<iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    string arr[n];
    int top = -1;
    if(n == 0){
        cout << "Empty Box";
    }
    else if(n > 6){
        cout << "Full Box";
    }
    else{
        for(int i = 0; i < n; i++){
            string nm;
            cin >> nm;
            top = top + 1;
            arr[top] = nm;
        }
        
        while(top!=-1){
            if(top == 0){
                cout << arr[top];
            }
            else{
            cout<<arr[top]<<"->";
            }
            top = top - 1;
        }
    }
    
    
    return 0;
}