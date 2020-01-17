/*####################### UNFINISHED PROGRAM #######################*/
    /*####################### DO NOT RUN #######################*/
#include<iostream>
#include<string>

using namespace std;

class CQueue{
    private:
        int front=0;
        int rear=0;
        int size=4;
        int *queue;
        bool isEmpty = true;
    public:
        void enqueue(int);
        int dequeue();
        void observe();
        CQueue(){
            queue = new int(size);
        }
        CQueue(int x){
            size = x;
            CQueue();
        }
};
void CQueue::enqueue(int num){
    int elems = size - front + rear + 1 - (front<=rear?size:0);
    if(elems<size){
        queue[rear] = num;
        rear %= size;
        isEmpty = false;
    }
}
int CQueue::dequeue(){
    if(!isEmpty){
        int num = queue[front++];
        front = front%size;
        if(front==rear+1){
            isEmpty=true;
            front=rear=0;
        }
        return num;
    }
    return -1;
}
void CQueue::observe(){
    int elems = size - front + rear + 1 - (front<=rear?size:0);
    cout<<"Front:"<<front<<" Rear:"<<rear<<" Elements:"<<elems<<"\n";
    cout<<"\n\tQueue: ";
    if(!isEmpty)
    for(int i=front;i<=rear;i++){
        i%=size;
        cout<<queue[i]<<" ";
    }
}

int main(){
    CQueue que;
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