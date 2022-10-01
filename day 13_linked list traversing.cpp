#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *link;
    int regno;
    string name;
    int fees;
};
struct Node *start = NULL;

void insert_at_tail(int data, string corn, int melon){
    struct Node *n = new Node;
    n->regno = data;
    n->name = corn;
    n->fees = melon;
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
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int inputs1;
        string inputs2;
        int inputs3;
        cin >> inputs1 >> inputs2 >> inputs3;
        insert_at_tail(inputs1, inputs2, inputs3);
    }
    
    int count = 0;
    
    struct Node *ptr = start;
    while(ptr!=NULL){
        if(ptr->fees > 25000){
            cout << ptr->regno << " " << ptr->name << " "<< ptr->fees;
            count = count + 1;
            cout << "\n";
        }
        ptr = ptr->link;
    }
    if(count == 0){
        cout << "Students does not have fee due more than 25000";
    }
    
    return 0;
}
