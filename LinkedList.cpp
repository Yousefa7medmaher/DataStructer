#include <iostream>
#include <algorithm> 

using namespace std ;

struct Node
{
    int  data ;
    Node * next ;
};
Node * head = nullptr ;

void insertBeginNode(int value){
    Node * newNode= new Node; 
    newNode->data = value;
    newNode->next = head; 
    head = newNode ;
}

void insertNode(int value){
    Node * newNode= new Node; 
    newNode->data = value;
    if (head == nullptr)
    {
        head = newNode ;
        newNode->next = nullptr ;
    }
    else{
        Node * last = head ;
        while (last->next != nullptr)
        {
            last =last->next ;
        }
        last->next = newNode  ;
        newNode->next = nullptr ;
    }
}

void deleteBegin(){
    Node * temp = head ;
    if (temp == nullptr )
    {
        cout<<"Not found any Node" <<endl;
    }
    else{
        head = temp->next ;
        free(temp);
        return ;
    }
}

void deleteNodeValue(int value){
Node * current = head ;
if (current->data == value)
{
    head =current->next ;
    delete current ;
    return ;
} 
    Node * previous = head ;
    while (current->data!=value)
    {
        previous = current ;
        current = current->next ;
    }
    previous->next = current->next ;
    delete current; 
}


void display(){
    Node * temp = head ;
    if (temp == nullptr)
    {
        cout<<"Not found any Node" <<endl;
    }
    while (temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}

int main(){
insertNode(1);
insertNode(2);
insertNode(3);
deleteBegin();
deleteNodeValue(3);
display();


return 0;
}