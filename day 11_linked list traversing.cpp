#include<iostream>
using namespace std;

struct Node{
    struct Node *link;
    int data;
    
};
struct Node *start;

void insert_at_tail(int item){
    struct Node *n = new Node;
    n->data = item;
    n->link = NULL;
    if(start == NULL){
        start = n;
    }else{
        struct Node *ptr = start;
        while(ptr->link!=NULL){
            ptr = ptr->link;
        }
        ptr->link = n;
    }
}

int main() {
    bool Flag = true;
    while(Flag){
        int n;
        cin >> n;
        insert_at_tail(n);
        if(n == -1){
            Flag = false;
        }
    }
        int odd = 0;
        struct Node *ptr = start;
        while(ptr!= NULL){
            if(ptr->data%2==1){
                odd = odd+1;
            }
            ptr = ptr->link;
        }
        if(odd == 0){
            cout << "No odd number present";
        }else{
            cout << odd;
        }
    return 0;
}
