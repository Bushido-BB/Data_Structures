#include<iostream>
#include<string>
#include "linkedlist.hpp"

using namespace std;

void LinkedList::add(string info){
    Node *ptr = start;
    Node *target = new Node;
    target->info = info;
    target->next = NULL;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = target;
    
    ptr = NULL;
    delete ptr;
}
void LinkedList::add(string info, int loc){
    Node *ptr = start;
    int i = 0;
    while(ptr->next!=NULL){
        i++;
        if(i==loc)
            break;
        ptr = ptr->next;
    }
    Node *target = new Node;
    target->info = info;
    target->next = ptr->next;
    ptr->next = target;
    
    ptr = NULL;
    delete ptr;
}
string LinkedList::remove(){
    if(start->next!=NULL){   
        Node *ptr = start;
        Node *prev;
        while(ptr->next!=NULL){
            prev = ptr;
            ptr = ptr->next;
        }
        string info = ptr->info;
        prev->next = prev->next!=NULL?NULL:prev->next;
        delete ptr;
        return info;
    }
    return "";
}
void LinkedList::remove(string target){
    Node *ptr = start;
    Node *prev;
    while(ptr->next!=NULL){
        prev = ptr;
        ptr = ptr->next;
        if(target.compare(ptr->info)==0){
            prev->next = ptr->next;
            delete ptr;
            return;
        }
    }
}
string LinkedList::remove(int loc){
    Node *ptr = start;
    Node *prev;
    string info = "";
    while(ptr->next!=NULL){
        prev = ptr;
        ptr = ptr->next;
        if(--loc == 0){
            info = ptr->info;
            prev->next = ptr->next;
            delete ptr;
            break;
        }
    }
    return info;
}
int LinkedList::search(string info){
    Node *ptr = start;
    int i = 0;
    while(ptr->next!=NULL){
        ptr = ptr->next;
        i++;
        if(info == ptr->info){
            ptr = NULL;
            delete ptr;
            return i;
        }
    }
    ptr = NULL;
    delete ptr;
    return -1;
}
string LinkedList::search(int loc){
    int  i = 0;
    Node *ptr = start;
    while(ptr->next!=NULL){
        ptr = ptr->next;
        if(++i == loc){
            string s = ptr->info;
            ptr = NULL;
            delete ptr;
            return s;
        }
    }
    ptr = NULL;
    delete ptr;
    return "";
}
void LinkedList::display(){
    Node *ptr = start;
    int i = 1;
    while(ptr->next!=NULL){
        ptr = ptr->next;
        cout<<i++<<"|"<<ptr->info<<"|->";
    }
    cout<<"\b\b  \b\b\n";

    ptr = NULL;
    delete ptr;
}