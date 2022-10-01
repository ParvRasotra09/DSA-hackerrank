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
    n->data = item;
    n->next = NULL;
    n->prev = NULL;
    
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
    
    for(int i = 0; i < 10; i++){
        int n;
        cin >> n;
        insert_at_tail(n);
    }
    
    struct Node *ptr = start;
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    
    return 0;
}
