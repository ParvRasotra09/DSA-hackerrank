#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;
int p=0;
void insertion(int key)
{
  struct node *n =(struct node*) malloc(sizeof(struct node));
    n->info=key;
    n->link=NULL;
    if(start==NULL){
    start=n;}
    else
    {
        struct node *q =start;
        while (q->link!=NULL)
        {
            q=q->link;
        }
        q->link=n;
    }
}
void delete (int pos)
{
    struct node* temp = start; 
                              
    int i;
    if (pos == 0) {
        start = start->link; 
        temp->link = NULL;
        printf("SLL is Empty"); 
    }
    else {
        for (i = 0; i < pos - 1; i++) {
            temp = temp->link;
        }
        
    
        struct node* del
            = temp->link; 
                          
        temp->link = temp->link->link;
        del->link = NULL;
    }
    return;
}
void printing()
{
    struct node *s = start;
    while(s!=NULL){
    
    printf("%d ",s->info);
    
    s=s->link;  
    
     
}
}
int main(){
    int n,d;
    scanf("%d",&n);     
    for(int i=0; i<n; i++){
    int x;
    scanf("%d",&x);
    insertion(x);}
    scanf("%d",&d);
    if (d<n)
    {
        delete(d);
        printing();
    }
    else
    {
        printf("Invalid Position");
    }
       
    return 0;
}
    
