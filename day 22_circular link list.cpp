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
        start = last = n;
    }
    else{
        last->next = n;
        n->prev = last;
        last = n;
    }
}

int main() {
    int delele;
    cin >> delele;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int nl;
        cin >> nl;
        insert_at_tail(nl);
    }  
    struct Node *ptr = start;
    int curele = 0;
    
    while(ptr!=NULL){
        if (curele == delele){
            delele = -1;
        }
        else{
            cout << ptr->data << " ";
        }
        ptr = ptr->next;
        curele = curele + 1;
    }
}