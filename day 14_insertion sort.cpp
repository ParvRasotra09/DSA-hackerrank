#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sizeofarr;
    cin >> sizeofarr;
    int arr[sizeofarr];
    
    for(int i = 0; i < sizeofarr;i++){
        cin >> arr[i];
    }
    
    for(int i = 1; i < sizeofarr;i++){
        int key = arr[i];
        int j = i - 1;
        
        while(key > arr[j] && j >=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }
    
    for(int i = 0; i < sizeofarr; i++){
        cout << arr[i]<< " ";
    }
    
    return 0;
}