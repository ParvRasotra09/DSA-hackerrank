
#include <iostream>  
using namespace std;  
int main ()  
{  
    int arr[100], st, mid, end, i, num, tgt;  
       
    cin >> num; 
      
    for (i = 0; i < num; i++)  
    {  
        cin >> arr[i];  
    }  
      
    st = 0;  
    end = num - 1; 
      
    cin >> tgt;  
      
    while ( st <= end)  
    {   
        mid = ( st + end ) / 2;  
        if (arr[mid] == tgt)  
        {  
            cout <<(mid);  
            exit (0); // use for exit program the program  
        }  
        else if ( tgt > arr[mid])  
        {  
            st = mid + 1; // set the new value for st variable  
        }  
           
        else if ( tgt < arr[mid])  
        {  
            end = mid - 1; 
        }  
    }  
    cout << "-1" << endl;  
    return 0;  
}