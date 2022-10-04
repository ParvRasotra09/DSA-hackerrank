#include <iostream>
using namespace std;

int main() {
    
    int arr[9999];
    int top = -1;
    
    for(int i = 0; i < 999; i ++){
    
    
    int n = 4;
    cin >> n;
    
    if(n == 4){
        break;
    }   
        
    if(n == 1){
        top = top + 1;
        int newele;
        cin >> newele;
        arr[top] = newele;
    }
    else if(n == 2){
        top = top - 1;
    }
    else if(n == 3){
        if(top == -1){
            cout << "-1";
        }
        else{
            for(int i = 0; i <= top; i++){
                cout << arr[i] << " ";
            }
        }
    }
    }
    return 0;
}