#include<iostream>
#include<string>
#include"./tree.hpp"

using namespace std;

int main(){
    Tree tree;
    string cmd="";
    do{
        if(cmd.compare("add")==0){
            
        }
        else if(cmd.compare("remove")==0){
            
        }else if(cmd.compare("display")==0){
            tree.display(1);
        }
    }while(getline(cin,cmd) && cmd.compare("exit")!=0 && cout<<">>");
    return 0;
}