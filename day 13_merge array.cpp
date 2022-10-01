#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    bool Flag = false;
    while(true){
        int sizeofarr1;
        cin >> sizeofarr1;
        int arr1[sizeofarr1];
        if(sizeofarr1 < 1 || sizeofarr1 > 20){
            cout << "Invalid Array";
            break;
        }
        for(int i = 0; i < sizeofarr1; i++){
            int n;
            cin >> n;
            arr1[i] = n;
        }
        for(int i = 0; i < sizeofarr1-1; i++){
            if(arr1[i] > arr1[i+1]){
                Flag = true;
            }
        }
        if(Flag){
            cout << "Incorrect Array Elements";
            break;
        }
        int sizeofarr2;
        cin >> sizeofarr2;
        int arr2[sizeofarr2];
        
        if(sizeofarr1 == sizeofarr2){
            cout << "Invalid Array";
            break;
        }
        
        if(sizeofarr2 < 1 || sizeofarr2 > 20){
            cout << "Invalid Array";
            break;
        }
        for(int i = 0; i < sizeofarr2;i++){
            int n;
            cin >> n;
            arr2[i] = n;
        }
        for(int i = 0; i < sizeofarr2-1; i++){
            if(arr2[i] > arr2[i+1]){
                Flag = true;
            }
        }
        if(Flag){
            cout << "Incorrect Array Elements";
            break;
        }
        
        int sizeofarr = sizeofarr1 + sizeofarr2;
        int iter1 = 0;
        int iter2 = 0;
        
        for(int i = 0; i < sizeofarr; i++){
            while(iter1 < sizeofarr1 && iter2 < sizeofarr2){
                if(arr1[iter1] < arr2[iter2]){
                    cout << arr1[iter1] << "\n";
                    iter1 = iter1 + 1;
                }
                else if(arr2[iter2] < arr1[iter1]){
                    cout<< arr2[iter2] << "\n";
                    iter2 = iter2 + 1;
                } else if(arr1[iter1] == arr2[iter2]){
                    cout << arr1[iter1] << "\n";
                    cout << arr2[iter2] << "\n";
                    iter1 = iter1 + 1;
                    iter2 = iter2 + 1;
                } 
            }
            if(iter1 == sizeofarr1){
                while(iter2!=sizeofarr2){
                    cout << arr2[iter2] << "\n";
                    iter2 = iter2 + 1;
                }
            }
            if(iter2 == sizeofarr2){
                while(iter1!=sizeofarr1){
                    cout << arr1[iter1] << "\n";
                    iter1 = iter1 + 1;
                }
            }
        }
        break;
    
    }
    return 0;
}