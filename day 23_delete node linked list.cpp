#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *next;
    int data;
};
struct Node *start = NULL;

void insert_at_tail(int item){
    struct Node *n = new Node;
    n->next = NULL;
    n->data = item;
    if(start == NULL){
        start = n;
    }
    else{
        struct Node *ptr = start;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

int main() {
    int n;
    cin >> n;
    if(n < 0 || n > 1000){
        cout << "Invalid Number";
    }
    else{
        if(n == 0){
            cout << "Underflow";
        }
        else{
            for(int i = 0; i < n; i++){
                int in;
                cin >> in;
                insert_at_tail(in);
            }
            struct Node *ptr = start;
            if(ptr->next == NULL){
                cout << "CLL is Empty";
            }
            else{
                ptr = ptr->next;
                while(ptr!=NULL){
                    cout << ptr->data << " ";
                    ptr = ptr->next;
                }
            }
        }
    }
    return 0;
}
