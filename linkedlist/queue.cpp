#include<iostream>
#include<string>
#include"linkedlist.hpp"

using namespace std;

int main(){
    LinkedList queue;
    string cmd = "";
    while(cout<<">>" && getline(cin,cmd) && cmd.compare("exit")!=0){
        if(cmd.compare("show")==0){
            cout<<"\n\tQueue:";
            queue.display();
        }else if(cmd.compare("add")==0){
            string info = "";
            cout<<"\n\tEntry:";
            getline(cin, info);
            queue.add(info);
        }else if(cmd.compare("remove")==0){
            cout<<"\n\tRetrived:";
            cout<<queue.remove(1)<<"\n";
        }
    }
}