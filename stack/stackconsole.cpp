#include<iostream>
#include<string>
#include"stack.hpp"

using namespace std;

int main(){
    Stack stk;
    string cmd="";
    do{
        if(cmd.compare("peek")==0){
            cout<<"\n\t";
            stk.peek();
        }
        else if(cmd.compare("push")==0){
            cout<<"\n\tEntry:";
            string num;
            cin>>num;
            stk.push(num);
            cout<<"\n";
        }else if(cmd.compare("pop")==0){
            cout<<"\n\tRetrived:";
            cout<<stk.pop()<<"\n";
        }
    }while(getline(cin,cmd) && cmd.compare("exit")!=0 && cout<<">>");
    return 0;
}