#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
  int data;
struct Node *next;
};

// this function will print all the content of linked list
void print_list(struct Node *n){

  while (n!=NULL){
    cout<<n->data<<" ";
    n=n->next;
  }
}

int main(){
  struct Node* head=NULL;
    struct Node* second =NULL;
      struct Node* third=NULL;

  //allocates 3 nodes in heap
  head=(struct Node*)malloc(sizeof(struct Node));
  second =(struct Node*)malloc(sizeof(struct Node));
  third =(struct Node*)malloc(sizeof(struct Node));


  head->data=1;// assign data to head of linked list
  head->next=second ;// linking list to next node
  second ->data=2;// assign data to second ele of linked list
  second ->next=third ;
  third ->data=3;// assign data to head of linked list
  third ->next=NULL ;
cout<< "Traversing through a single linked list \n";
  print_list(head);
  return 0;
}
