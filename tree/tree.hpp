#include<string>
class Tree{
    private:
        struct Node{
            std::string info;
            Node *left;
            Node *right;
        };
        Node *root;
    public:
        Tree(){
            root = new Node;
            root->info = "A";
            Node *b = new Node;
            Node *c = new Node;
            Node *d = new Node;
            Node *e = new Node;
            b->info = "B";
            c->info = "C";
            d->info = "D";
            e->info = "E";
            root->left = b;
            b->left = NULL;
            b->right = d;
            d->left = NULL;
            d->right = NULL;
            root->right = c;
            c->left = e;
            c->right = NULL;
            e->left = e->right = NULL;
        }
        void add(int,int);
        void search(int);
        void display(int);
        void remove(int);
};