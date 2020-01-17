#include"tree.hpp"
#include"../stack/stack.hpp"
#include<iostream>
#include<string>

using namespace std;

void Tree::add(int info, int pos){

}
void Tree::remove(int info){

}
void Tree::search(int info){

}
void Tree::display(int order){
    Node *ptr = root;
    Stack stack;
    string traversal = "";
    switch(order){
        case 1:{

            while((ptr->left!=NULL && ptr->right!=NULL) || stack.peek()!=-1){
                stack.peek();
                traversal += ptr->info+" ";
                if(ptr->right!=NULL){
                    stack.push(ptr->right);
                }
                if(ptr->left!=NULL){
                    ptr = ptr->left;
                }else{
                    ptr = stack.pop();
                }
            }
            cout<<"TREE:"<<traversal;

        }break;
    }
}