#include <iostream>
using namespace std;

class node{
        
        public:
        int data;
        node *next;
        node(){
                next=NULL;
        }
        
};

class list{
        public:
        node *head;
        node *tail;
        list(){
                tail=head=NULL;
        }
        
        node *begin(){
                return head;
        }
        
        void push(int data){
            if(head==NULL){
                    node *n=new node;
                    n->data=data;
                    n->next=NULL;
                    tail=head=n;
            }    
                
                else{
                        node *n=new node;
                        n->data=data;
                        tail->next=n;
                        n->next=NULL;
                        tail=n;
                }
                
        }
};


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
        
        list l;
        int n;
        cin>>n;
        int data;
        for(int i=0;i<n;i++){
              cin>>data;
                l.push(data);
        }
        node *temp=l.begin();
       int sum=0;
        int a=0;
        for(int i=0;i<n;i++){
                if(temp->data%2==0){
                        sum+=temp->data;
                        a=1;
                }
                temp=temp->next;
        }
        
        if(a){
                cout<<sum;
        }
        else{
                cout<<"No Even numbers Present";
        }
        
        
        
    return 0;
}