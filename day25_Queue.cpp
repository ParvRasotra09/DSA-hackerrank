#include<iostream>

using namespace std;

int main() {

    string s;

    getline(cin,s);

    char arr[s.length()];

    int top = -1;

    for(int i = 0; i < int(s.length()); i++){

        top = top + 1;

        arr[top] = s[i];

    }

    string newstr = "";

    while(arr[top]!=','){

        newstr = newstr + arr[top];

        top = top -1;

    }

    for(int i = newstr.length()-1; i >= 0; i--){

        cout << newstr[i];

    }

    

    return 0;

}