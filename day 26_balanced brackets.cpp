#include<iostream>
using namespace std;

int main() {
    int tcase;
    cin >> tcase;
    for(int i = 0; i < tcase; i++){
    string s;
    cin >> s;
    int top = -1;
    char arr[s.length()];
    for(int i = 0; i < s.length(); i++){
        if(top == -1){
            top = top + 1;
            arr[top] = s[i];
        }
        else if((arr[top] == '(' && s[i] == ')')||(arr[top] == '{' && s[i] == '}')||(arr[top] == '[' && s[i] == ']')){
            top = top - 1;
        }
        else{
            top = top + 1;
            arr[top] = s[i];
        }
    }
    if(top == -1){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
    }
    return 0;
}