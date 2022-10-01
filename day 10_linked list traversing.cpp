#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *link;
    int data;
};

struct Node *start = NULL;

void insert_at_tail(int item){
    struct Node *n = new Node;
    n->data = item;
    n->link = NULL;
    if(start == NULL){
        start = n;
    }else{
        struct Node *ptr = start;
        while(ptr->link != NULL){
            ptr = ptr->link;
        }
        ptr->link = n;
    }
}

int main() {
    int n;
    cin >> n;
    if(n < 0 || n > 7){
        cout << "Invalid Range";
    } else {
        for(int i = 0; i < n; i++){
            int in;
            cin >> in;
            insert_at_tail(in);
        }
        int even = 0;
        int odd = 0;
        struct Node *ptr = start;
        while(ptr!=NULL){
            if(ptr->data%2==0){
                even = even + ptr->data;
            } else {
                odd = odd + ptr->data;
            }
            ptr = ptr->link;
        }
        cout << odd << " " << even;
    }
    return 0;
}
