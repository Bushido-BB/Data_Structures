#include<string>
class LinkedList{
    private:
        struct Node{
            std::string info;
            Node *next;
        };
        Node *start;
        Node *end;

    public:
        LinkedList(){
            start = new Node;
            start->info = "Start";
            start->next = NULL;
        }
        ~LinkedList(){
            delete start;
        }
        void add(std::string);
        void add(std::string,int);
        std::string remove();
        void remove(std::string);
        std::string remove(int);
        int search(std::string);
        std::string search(int);
        void display();
};