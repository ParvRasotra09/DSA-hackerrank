#include <iostream>
using namespace std;


int main() {
    int sizeofarr1;
    cin >> sizeofarr1;
    int arr1[sizeofarr1];
    for(int i = 0; i < sizeofarr1; i++){
        int n;
        cin >> n;
        arr1[i] = n;
    }
    int sizeofarr2;
    cin >> sizeofarr2;
    int arr2[sizeofarr2];
    for(int i = 0; i < sizeofarr2; i++){
        int n; 
        cin >> n;
        arr2[i] = n;
    }
    int sizeofarr = sizeofarr1 + sizeofarr2;
    int arr[sizeofarr];
    int k = 0;
    for(int i = 0; i < sizeofarr; i++){
        if(i < sizeofarr1){
            arr[i] = arr1[i];
        }
        else{
            arr[i] = arr2[k];
            k = k + 1;
        }
    }
    
    for(int i = 0; i < sizeofarr; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    int counter = 0;
    
    for(int i = 0; i < sizeofarr; i++){
        if(arr[i]%2 == 0){
            cout << i << " ";
            counter = counter + 1;
        }
    }
    if(counter == 0){
        cout << "-1";
    }
    
    return 0;
}
