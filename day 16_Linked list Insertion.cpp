
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *next;
    string name;
    int age;
};
struct Node *start = NULL;

void insert_at_tail(string s, int a){
    struct Node *n = new Node;
    n->name = s;
    n->age = a;
    n->next = NULL;
    
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

void sorted_inert(string s, int a){
    struct Node *n = new Node;
    n->name = s;
    n->age = a;
    struct Node *ptr = start;
    struct Node *save = NULL;
    
    while(ptr!=NULL){
        
        if(ptr->age < a){
            save->next = n;
            n->next = ptr;
            break;
        }
        if(ptr->next == NULL){
            ptr->next = n;
        }
        
        save = ptr;
        ptr = ptr->next;
    }
    
    
}

int main() {
    int n;
    cin >> n;
    
    if(n > 10 || n < 5){
        cout << "Invalid Input";
    } else {
    
    for (int i = 0; i < n; i++){
        string namee;
        int agee;
        cin >> namee >> agee;
        insert_at_tail(namee, agee);
    }
    
    struct Node *ptr = start;
    while(ptr!=NULL){
        cout << ptr->name << " ";
        ptr = ptr->next;
    }
    
    cout << "\n";
    
    string reqname;
    int reqage;
    cin >> reqname >> reqage;
    sorted_inert(reqname, reqage);
    
    struct Node *ptr2 = start;
    
    while(ptr2!=NULL){
        cout<<ptr2->name<<" ";
        ptr2 = ptr2->next;
    }
    }
    
    return 0;
}
