#include<iostream>
#include<string>
#include "linkedlist.hpp"

using namespace std;
class LinkedList;

int main(){
    LinkedList list;
    string cmd="";
    while(cout<<">" && getline(cin,cmd) && cmd.compare("exit")!=0){
        if(cmd.compare("add")==0){
            string info;
            cout<<"\n\tEntry:";
            getline(cin,info);
            list.add(info);
        }else if(cmd.compare("add at")==0){
            string info;
            int loc;
            cout<<"\n\tEntry:\n";
            cout<<"\t\tValue:";
            getline(cin,info);
            cout<<"\t\tLocation:";
            cin>>loc;
            list.add(info,loc);
        }else if(cmd.compare("remove")==0){
            list.remove();
        }
        else if(cmd.compare("remove value")==0){
            string target;
            cout<<"\n\tEntry:";
            getline(cin,target);
            list.remove(target);
        }else if(cmd.compare("remove from")==0){
            int loc;
            cout<<"\n\tEntry:";
            cin>>loc;
            list.remove(loc);
        }else if(cmd.compare("search value")==0){
            string info;
            cout<<"\n\tEntry:";
            getline(cin,info);
            cout<<"\n\tRetrived Location:"<<list.search(info)<<"\n";
        }else if(cmd.compare("search location")==0){
            int loc;
            cout<<"\n\tEntry:";
            cin>>loc;
            cout<<"\n\tRetrived Value:"<<list.search(loc)<<"\n";
        }else if(cmd.compare("display")==0){
            list.display();
        }
    }
    return 0;
}