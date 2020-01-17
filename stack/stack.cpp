#include<iostream>
#include"stack.hpp"

using namespace std;

int Stack::pop(){
    if(top>=0 && top<size){
        int num = stack[top];
        stack[top--]='\0';
        return num;
    }
    return -1;
}
void Stack::push(int x){
    if(top<size-1 && top>=-1){
        stack[++top] = x;
    }else{
        cout<<"E: Stack Overflow";
    }
}
int Stack::peek(){
    cout<<"Stack: ";
    int i = 0;
    while(i<=top){
        cout<<stack[i]<<" ";
        i++;
    }
    cout<<"\n";
    return top;
}