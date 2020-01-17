#include<iostream>
#include<string>

using namespace std;

class Queue{
    private:
        int front=0;
        int rear=-1;
        int size=4;
        int *queue;
    public:
        void enqueue(int);
        int dequeue();
        void observe();
        Queue(){
            queue = new int(size);
        }
        Queue(int x){
            size = x;
            Queue();
        }
};

void Queue::enqueue(int num){
    if(rear!=size-1){
        queue[++rear] = num;
    }
}
int Queue::dequeue(){
    if(front>rear){
        rear=-1;
        front=0;
    }else{
        int num = queue[front++];
        return num;
    }
    return -1;
}
void Queue::observe(){
    cout<<"Front:"<<front<<" Rear:"<<rear<<"\n";
    cout<<"\n\tQueue: ";
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
}

int main(){
    Queue que;
    string cmd;
    while(getline(cin,cmd) && cmd.compare("exit")!=0){
        cout<<">>";
        if(cmd.compare("observe")==0){
            que.observe();
        }else if(cmd.compare("enqueue")==0){
            int num;
            cout<<"\n\tEntry:";
            cin>>num;
            que.enqueue(num);
        }else if(cmd.compare("dequeue")==0){
            cout<<"\n\tRetrived:";
            cout<<que.dequeue();
        }
    }
    return 0;
}