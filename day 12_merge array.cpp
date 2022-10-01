#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
        
        int n1, n2;
        cin >> n1;
        int f = 3;
        if (!(n1 > 0 && n1 <= 20)) {
              f = 0;
        }
        
        vector<int> arr;
        for (int i = 0; i < n1; i++) {
                int x; cin >> x;
                arr.push_back(x);
        }
        cin >> n2;
        vector<int> brr;
         if (!(n2 > 0 && n2 <= 20)) {
               f = 0;
        }
        
        
        for (int i = 0; i < n2; i++) {
                int x;
                cin >> x;
                brr.push_back(x);
        }
        for (int i = 1; i < n1; i++) {
                if (arr[i] > arr[i - 1]) {
                        
                      f = 1;
                        break;
                }
        }
                for (int i = 1; i < n2; i++) {
                if (brr[i] > brr[i - 1]) {
                        
                      f = 1;
                break;
                }
        }
        if (n1 == n2) {
                f = 0;
        }
        if (f == 0) {
                cout << "Invalid Array" << endl;
        }
        else if (f == 1) {
                cout << "Incorrect Array Elements" << endl;
        }
        else {
                vector<int> marr;
        int i = 0;
        int j = 0;
        while (i < n1 && j < n2) {
                if (arr[i] > brr[j]) {
                        marr.push_back(arr[i]);
                        i++;
                }
                else {
                        marr.push_back(brr[j]);
                        j++;
                }
        }
        while (i < n1) marr.push_back(arr[i++]);
        while (j < n2) marr.push_back(brr[j++]);
        for (int i = 0; i < (int) marr.size(); i++) {
                cout << marr[i] << endl;
        }
        }
        
        
        
        
        
    return 0;
}