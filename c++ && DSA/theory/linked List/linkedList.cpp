#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;

    Node(int data_val) 
        : data{data_val} , next {nullptr} {}
};

//functions
void printList( Node *);
int search( Node * head , int key);
Node* insertBegin(Node *  , int );
Node* insertEnd( Node * head , int data);
Node* deleteHead(Node * head);
Node* deleteTail(Node * head);
Node* insertPos(Node * head , int pos , int data);
Node* sortedInsert(Node* head , int data);
void printMiddle(Node * head);
void printNth(Node* head , int n );
Node* reverse(Node * head);

    
//driver code
int main(){

    //Manual creation of nodes one by one (not practical)
    Node * head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30); 
    printList(head1);                     //Note : We only need the head of the linked list.

    //insertBegin trial
    Node* head2 = insertBegin(nullptr , 30);
    head2 = insertBegin(head2 , 20);
    head2 = insertBegin(head2 , 10);
    head2 = insertBegin(head2, 0);
    printList(head2);
    //search trial
    int pos = search( head2 , 40);
    cout<<pos;
    cout<<"\n======================\n";
    //insertEnd trial
    Node * head3 = insertEnd(nullptr , 0);
    head3 = insertEnd(head3 , 10);
    head3 = insertEnd(head3 , 20);
    head3 = insertEnd(head3 , 30);
    printList(head3);
    head3 = deleteHead(head3);
    printList(head3);
    head3 = deleteHead(head3);
    printList(head3);
    head3 = deleteHead(head3);
    printList(head3);
    head3 = deleteHead(head3);
    printList(head3);
    head3 = deleteHead(head3);
    printList(head3);
    head3 = insertEnd(head3 , 0);
    head3 = insertEnd(head3 , 10);
    printList(head3);
    head3 = deleteTail(head3);
    printList(head3);
    head3 = deleteTail(head3);
    printList(head3);
    head3 = deleteTail(head3);
    printList(head3);
    //insertPos trial
    head3 = insertPos(head3, 1 , 0);
    head3 = insertPos(head3 , 2 , 10);
    head3 = insertPos(head3 , 1 , 20);
    printList(head3);
    head3 = insertPos(head3 , 3 , 30);
    printList(head3);
    head3 = insertPos(head3 , 6 , 40);
    printList(head3);
    //sortedInsert trial
    head2 = sortedInsert(head2 , 1);
    head2 = sortedInsert(head2 , 50);
    head2 = sortedInsert(head2 , 0);
    head2 = sortedInsert(head2 , -1);
    printList(head2);
    //printMiddle trial
    printMiddle(head2);
    head2 = reverse(head2);
    printList(head2);
    //printNth trial
    printNth(head2 , 5);
    printNth(head2 , 9); 

    Node* latest = nullptr;
    latest = insertBegin(latest , 10);
    latest = insertEnd(latest , 20);
    latest = insertEnd(latest , 30);
    latest = insertEnd(latest , 40);
    latest = insertEnd(latest , 50);
    latest = insertEnd(latest , 60);
    printList(latest);
    latest = insertPos(latest , 7 , 69);
    printList(latest);
    

    return 0;
}

//iterative print function given the head ptr 
void printList( Node * head){

    Node * curr = head;
    while(curr!= nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
    cout<<"\n======================\n";
}
//returns the position of element if present and -1 if not present (position starts from 1)
int search( Node * head , int key){
    //iterative
    int pos = 1;
    Node * curr = head;
    while(curr!=nullptr){
        if(curr->data == key)   return pos;
        pos++;
        curr = curr->next;
    }
    return -1;

    //recursive
    // static int pos = 1;
    // if(head == nullptr)
    // return -1;
    // if(head->data == key)
    // return pos;
    // else {
    //     pos++;
    //     return search(head->next , key);
    // }
}
//insert in begin function given the head ptr..if head is null it returns a new head and if its valid ptr then it creates a new head and returns and makes the old head as the next node
Node* insertBegin(Node *  head , int data){
    Node* newHead = new Node(data);
    newHead->next = head;
    return newHead;
}
//inserts at the end of the list and returns the head (if head is null the inserts at the beginning)
Node* insertEnd( Node* head , int data){
    
    Node * newNode = new Node(data);
    if(head == nullptr)                   //edge case as we need to change head
    return newNode;
    Node* curr = head;
    while(curr->next!= nullptr){
        curr = curr->next;
    }
    curr->next = newNode;
    return head;                           //returns the head of the linked list which now has a new element

}
//deletes the first Node and returns a new head (in case of null head it returns null)
Node* deleteHead(Node * head){
    if(head == nullptr){
        return nullptr;
    }
    Node* newHead = head->next;
    delete head;
    return newHead;
    
}
//deletes the tail and then returns the modified head(in case of null head or only one element in linked list it returns null as head)
Node* deleteTail(Node * head){
    if(head == nullptr || head->next == nullptr){         //explicit cases as we will modify head in this
        delete head;
        return nullptr;
    }
    Node* curr = head ; 
    while(curr->next->next != nullptr){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = nullptr;
    return head;
}
//inserts at position till size + 1 of the linked list (in case of a position greater than size + 1 function does no changes)
Node* insertPos(Node * head , int pos , int data){
    Node* newNode = new Node(data);

    // if(head == nullptr && pos>=2)                       
    // return nullptr;
    //if we need to insert a1 1st position (head)
    if(pos ==1){                        //the only case where we modify head;
        newNode->next = head;
        return newNode;
    }

    int curr_pos = 1;
    Node * curr = head;
    while(curr!= nullptr){
        if( (curr_pos + 1) == pos){
            newNode->next = curr->next;
            curr->next = newNode;
            return head;
        }
        curr = curr->next;
        curr_pos++;
    }
    return head;
}
//inserts at correct position by asc order assuming linked list is sorted 
Node* sortedInsert(Node * head , int data){
    Node* newNode = new Node(data);             //new node to be inserted
    //check if head is null or data to be inserted is smallest(in this case we need to "change head" to be the newnode)
    if(head == nullptr || head->data > data){
        newNode->next = head;
        return newNode;
    }
    Node* curr = head;
    
    while(curr->next != nullptr){
        if(curr->next->data > data)
        break;
        curr = curr->next;
    }

    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}
//slow fast pointer idea
void printMiddle(Node * head){
    if(head == nullptr)
    return;
    
    Node * slow = head;
    Node * fast = head;
    while(fast != nullptr && fast->next != nullptr){             //&& used here to ensure if fast becomes null then loop breaks without check of fast->next;
        slow = slow->next;
        fast = fast->next->next;
    }
    cout<<"Mid : "<<slow->data; 
    cout<<"\n======================\n";
}
//if n passed is gerater than size of linked list then we do nothing and return
void printNth(Node* head , int n ){
    if(head==nullptr || n<=0){
        cout<<"\n======================\n";
        return;
    }
    Node* curr = head;
    for(int i =0 ; i<n ; i++){
        if(curr == nullptr){
            cout<<"\n======================\n";
            return;
        }
        curr = curr->next;
    }
    Node * Nth =head;
    while(curr!= nullptr){
        Nth = Nth->next;
        curr = curr->next;
    }
    cout<<Nth->data;
    cout<<"\n======================\n";

}
//reverses the linked list and returns the tail as new head(returns nullptr if head passes is null)
Node* reverse(Node * head){
    //this case is also handled by the code below this check
    if(head==nullptr ){
        return head;
    }
    Node * prev = nullptr;
    Node * curr =head;
    while(curr != nullptr){
        Node* next = curr->next;
        curr->next=prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
}

