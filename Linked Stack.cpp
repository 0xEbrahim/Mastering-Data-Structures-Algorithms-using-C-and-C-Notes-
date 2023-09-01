#include <bits/stdc++.h>

using namespace std;
const int MX = 1000;


template<class T>
class Stack {
private:
    struct Node{
        T val;
        Node* next;
        // next is pointing to {
        // another node that contains (val & next)
        // }
    };
    Node* tp ;
public:
    Stack(){
        tp = nullptr;
    }
    void push(T el){
        Node*element_ptr = new Node;
        if(element_ptr == nullptr){
            cout << "Memory allocation error" << endl;
        }else {
            element_ptr->val = el;
            element_ptr->next = tp;
            tp = element_ptr;
        }
    }
    void pop(){
        if(!isEmpty()){
            Node *temp = tp;
            tp = tp->next;
            temp = temp->next = nullptr;
            delete temp;
        }else{
            cout << "Stack is Empty" << endl;
        }
    }
    int top(){
        if(!isEmpty()){
            return tp->val;
        }else{
            cout << "Stack is Empty " << endl;
        }
    }
    void display(){
        Node*temp = tp;
       while(temp != nullptr){
           cout << temp->val << " " ;
           temp = temp->next ;
       }
       temp = nullptr;
       delete temp;
    }
    bool isEmpty(){
        return (tp == nullptr);
    }
};

int main(){
Stack<int>st;
st.push(50);
    st.push(580);
    st.push(50);
    st.pop();
    st.push(520);
    st.push(2150);
    st.push(509);
    st.push(520);
    st.push(500);
st.display();
cout << endl;
cout << st.top();
}
