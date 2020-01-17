#include<string>
class Stack{
    private:
        int size = 32;
        int *stack;
        int top=-1;
    public:
        void push(int);
        int pop();
        int peek();
        
        Stack(){
            stack = new int[size];
        }
        Stack(int x){
            size = x;
            Stack();
        }
        // ~Stack(){
        //     cout<<"\n";
        //     delete this;
        // }
};