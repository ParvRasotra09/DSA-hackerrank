#include<iostream>
using namespace std;

int main() {

       
    int size;
    cin>>size;
    
    
    int count = 0;
    if(size < 3 || size >11 ){
        cout<<"Wrong Input.";
        return 0;
    }
    int arr [ size ];
    for ( int i =0 ; i<size ; i++){
        int temp;
        cin>>temp;
        if( temp % 2 != 0)
        {
            
            count++;
        }
        arr[i]=temp;
    }
    if(!count){  cout<<"No student is having odd roll number.";
    return 0;
    }
    for ( int i =0 ; i<size ; i++){
        
        if( arr[i] % 2 == 0)
        {
            cout<<arr[i]<<" ";
            
        }
        
    }
    return 0;
}