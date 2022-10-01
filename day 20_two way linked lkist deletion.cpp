#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *next;
    struct Node *prev;
    int data;
};
struct Node *start = NULL;
struct Node *last = NULL;

void insert_at_tail(int item){
    struct Node *n = new Node;
    n->next = NULL;
    n->prev = NULL;
    n->data = item;
    
    if(start == NULL){
        start = n;
        last = n;
    }
    else{
        last->next = n;
        n->prev = last;
        last = n;
    }
}

int main() {
    int n;
    cin >> n;
    
    if(n < 3 || n > 20){
        cout << "Invalid list size";
    }
    else {
    
    for(int i = 0; i < n; i++){
        int inputs;
        cin >> inputs;
        insert_at_tail(inputs);
    }
    int ele;
    cin >> ele;
    int counter = 0;
    
    struct Node *ptr = start;
    while(ptr!=NULL){
        
        if(ptr->data == ele){
            counter = counter + 1;
        }
        
        ptr = ptr->next;
    }
    
    if(counter == 0 || counter == 1){
        cout << "Deletion not possible";
    }
    else{
        struct Node *ptr = last;
        int counter = 0;
        while(ptr!=NULL){
            if(ptr->data == ele){
                counter = counter + 1;
            }
            if(counter == 2){
                counter = 9999;
            }
            else {
                cout << ptr->data << "\n";
            }
            ptr = ptr->prev;
        }
    }
    
    }
    
    return 0;
}