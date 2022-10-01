#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Node{
    struct Node *next;
    char data;
};

struct Node *start = NULL;

void insert_at_tail(char item){
    struct Node *n = new Node;
    n->next = NULL;
    n->data = item;
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

bool isVowel(char hi){
    if(hi == 'A' || hi == 'E' || hi == 'I' || hi == 'O' || hi == 'U'){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char inputs;
        cin >> inputs;
        insert_at_tail(inputs);
    } 
    
    char ele;
    cin >> ele;
    
    struct Node *ptr = start;
    struct Node *nextptr = ptr->next;
    
    bool inserted = false;
    
    if(isVowel(ele)){
        if(isVowel(ptr->data) == false){
            cout << ele << " ";
            while(ptr!=NULL){
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
        }
        else{
            string newstring = "";
            newstring = newstring + ptr->data + " ";
            while(nextptr!=NULL){
                if(isVowel(ptr->data) == false && isVowel(nextptr->data) == false && inserted == false){
                    newstring = newstring + ele + " " + nextptr->data + " ";
                    inserted = true;
                }
                else{
                    newstring = newstring + nextptr->data + " ";
                }
                ptr = nextptr;
                nextptr = nextptr->next;
            }
            if(isVowel(ptr->data) == false && inserted == false){
                newstring = newstring + ele;
                inserted = true;
            }
            if(inserted == false){
                cout << "Can't be inserted";
            }
            else{
                cout << newstring;
            }
        }
    }
    else{
        if(isVowel(ptr->data) || isVowel(nextptr->data)){
            cout << ele << " ";
            while(ptr!=NULL){
                cout << ptr->data << " ";
                ptr = ptr->next;
            }
        }
        else{
            string newstring = "";
            newstring = newstring + ptr->data + " ";
            bool inserted = false;
            struct Node *secondptr = start;
            struct Node *thirdptr = secondptr->next;
            struct Node *fourthptr = thirdptr->next;
            struct Node *fifthptr = fourthptr->next;
            newstring = newstring + thirdptr->data + " ";

            
            while(fourthptr->next!=NULL){
                if(((isVowel(secondptr->data) || isVowel(thirdptr->data)) && (isVowel (fourthptr->data) || isVowel(fifthptr->data))) && inserted == false){
                    newstring = newstring + ele + " " + fourthptr->data + " ";
                    inserted = true;
                }
                else{
                    newstring = newstring + fourthptr->data + " ";
                }
                secondptr = secondptr->next;
                thirdptr = thirdptr->next;
                fourthptr = fourthptr->next;
                fifthptr = fifthptr->next;
            }
            
            if(isVowel(thirdptr->data) && inserted == false){
                newstring = newstring + ele + " " + fourthptr->data;
                inserted = true;
            }
            else if(isVowel(fourthptr->data) && inserted == false){
                newstring = newstring + fourthptr->data + " " + ele;
                inserted = true;
            }
            else{
                newstring = newstring + fourthptr->data;
            }
            
            if(inserted == false){
                cout << "Can't be inserted";
            }
            else{
                cout << newstring;
            }
            
            
        }
    }
    
    return 0;
}