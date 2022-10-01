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
    n->data = item;
    n->next = NULL;
    if(start == NULL){
        start = n;
    }else{
        struct Node *ptr = start;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

int main() {
    int n;
    cin >>n;
    for(int i = 0; i < n; i++){
        int itemm;
        cin >> itemm;
        insert_at_tail(itemm);
    }
    
    string newstr = "";
    
    struct Node *ptr = start;
    while(ptr!=NULL){
        if(ptr->data%2 == 0){
            newstr = newstr + to_string(ptr->data) + " ";
            cout << newstr << "\n";
        }
        ptr = ptr->next;
    }
    
    return 0;
}
