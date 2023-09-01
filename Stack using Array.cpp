#include <bits/stdc++.h>

using namespace std;
const int MX = 1000;

template<class T>
class Stack{

private:
    int tp;
    T item[MX];
public:
    Stack(){
        tp = -1;
    }
    bool isEmpty(){
        return (tp == -1);
    }
    void push(T it){
        if(tp >= MX-1){
            cout << "Stack is Full" << endl;
        }else {
            tp++;
            item[tp] = it;
        }
    }
    void pop(){
        if(isEmpty()){
            cout << "Stack is already empty..!" << endl;
        }else{
            tp--;
        }
    }
    void pop(int &el){
        if(isEmpty()){
            cout << "Stack is already empty..!" << endl;
        }else{
            el = item[tp];
            tp--;
        }
    }
    int top(){
        if(isEmpty()){
            cout << "Stack is already empty..!" << endl;
        }else{
            return item[tp];
        }
    }
    void printStack(){
        for(int i = tp ; i >= 0 ; i--){
            cout <<"| "<< item[i] << " |" << endl;
        }
        cout << "___" ;
    }
};

int main(){
    Stack<char> st;
    st.push('u');
    st.push('q');
    st.push('y');
    st.push('t');
    st.pop();
    st.push('a');
   st.pop();
   st.printStack();
}
