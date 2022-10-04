#include<iostream>
using namespace std;


int main() {
    string arr[9];
    int rear = -1;
    
    while(true){
    int n = 3;
    cin >> n;    
    if(n == 3){
        break;
    }
    if(n == 1){
        int num;
        cin >> num;
        for(int i = 0; i < num; i++){
            string name;
            cin >> name;
            if(rear == -1){
                rear = 0;
                arr[rear] = name;
            }
            else if(rear == 8){
                cout << "No other spectator is allowed";
                break;
            }
            else{
                rear = rear + 1;
                arr[rear] = name;
            }
        }
    }
    if(n == 2){
        for(int i = 1; i <= rear; i = i+2){
            cout << arr[i] << " ";
        }
    }
    }
        return 0;
}