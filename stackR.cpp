/*
13. Stack
Stack is a linear data structure that follows the Last In, First Out (LIFO) principle. Stacks play an important role in managing function calls, memory, and are widely used in algorithms like stock span problem, next greater element and largest area in a histogram.
 */

#include <iostream> 
using namespace std ;

class Stack { 
    private :
        int capacity ;
        int * arr ;
        int top  ;
    public: 
    Stack(int size ){
        capacity = size ;
        arr = new int [size] ;
        top = -1 ;    
    }
    ~Stack(){
        delete [] arr  ;  
    }
    bool isEmpty(){
        return top == -1 ;
    }
    bool isFull(){
        return top == capacity -1 ;
    }
    void push(int value){
        if (isFull())
        {
            cout<<"Stack is overFlow"<<endl;
        }
        else{
            arr[++top] = value ;
        }        
    }
    void pop(){
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else{
            arr[top--] ;
        }
    }

void Display(){
        if (isEmpty())
        {
            cout<<"Stack is Empty"<<endl;
        }
        else{
            for (int i = 0; i <= top ; i++)
            {
                cout<<arr[i]<< " " ;
            }
            
        }
}

};

int main(){
    Stack Goo(5);
    Goo.push(1);
    Goo.push(2);
    Goo.push(3);
    Goo.push(4);
    Goo.pop();
    Goo.Display();
    return 0; 
}