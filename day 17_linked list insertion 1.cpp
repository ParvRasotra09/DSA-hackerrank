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
    else {
        struct Node *ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = n;
    }
}

int main() {
    
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        insert_at_tail(n);
    }
    
    int pos,ele = 0;
    cin >> pos;
    cin >> ele;
    
    int curpos = 1;
    
    struct Node *ptr = start;
    
    while(ptr!=NULL){
        if (curpos == pos){
            cout << ele << " " << ptr->data << " ";
        }
        else {
            cout << ptr->data << " ";
        }
        ptr = ptr->next;
        curpos = curpos + 1;
    }
    
    return 0;
}
