
#include <iostream>

class Node{
    public:
        int data;
        Node* next;
        Node(int _data){
            data=_data;
            next=NULL;
        }

        Node* insert(int _data){
            Node* temp=new Node(_data);
            if(this==NULL)      return temp;

            Node* curr=this;
            while(curr->next!=NULL)      curr=curr->next;
            curr->next=temp;

            return this;
        }

    void displayLL(){
        Node* curr=this;
        while(curr!=NULL){
            std:: cout<<curr->data<<" ";
            curr=curr->next;
        }
        std:: cout << std:: endl;
    }

    Node* deleteLargestElement(){

        Node* curr=this;
        Node* largest=curr;
        curr=curr->next;

        while(curr!=NULL){
            
            if(largest->data < curr->data)      largest=curr;
            curr=curr->next;
        }

        curr=this;
        
        if(curr==largest)   return curr->next;
        while( curr->next!=largest ){
            
            curr=curr->next;
            
        }
        Node* temp=largest;
        curr->next=largest->next;
        delete(temp);

        return this;
    }

};

int main(){
    Node* head=NULL;
    
    int size;
    std:: cin>>size;
    for(int i = 0 ; i<size ; i++ ){
        int data;
        std:: cin>>data;
        head=head->insert(data);
    }

    head = head->deleteLargestElement();

    head->displayLL();
    return 0;
}