#include<iostream>
using namespace std;
 /*
class node{
    public:
    int data;
    node *next;

    node(int data) : data(data), next(NULL)   {
        
    }
       
};
    void insert(node *&head ,int d){
        /*we take reference of head we will change in its orginal linked list */
        //inserting at the beginning of linked list
      /* node *head=nullptr;
       node *first=new node(10);
       node *temp=new node(12);
       temp->next=first;
       head=temp;
       head=nullptr;
       node *temp=new node(d);
       temp-> next=head;
       head=temp;
    }
    void printll(node *head ){
        node *temp=head;
        while(temp!=NULL){
           cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


       
       
int main(){
    node *first=new node(10);
    node *head=first;
    
    insert(head,12);
    printll(head);}
    */

   class node{
    public:
    int data;
    node* next;
    
    //constructor for creating a new linked list with one element.
    node(int data):data(data), next(NULL){}
    
   };
   void insert( node* &head,int d){
    node* temp =new node(d);
    temp->next=head;
    head=temp;


   }
   void print(node* &head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;

    }
    cout<<endl;
      
   }

   int main(){
    node* head=new node(10);
   /* cout<<head->data<<endl;
    cout<<head->next<<endl;*/
    insert(head,15);
    print(head);
    




    

     

   }
  
 

    

    



  





