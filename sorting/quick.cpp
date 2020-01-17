#include<iostream>
#include<string>
// #include<sstream>
#include"../stack/stack.hpp"

using namespace std;

int main(){
    Stack stk;
    int array[] = {44,33,11,55,77,90,40,60,99,22,88,66};
    int len = 12;

    int low = 0;
    int high = len-1;
    

    int pivot = len-1;
    int itr = 0;
    
    // string popped = "";
    // stringstream mocha(popped);

    // mocha<<low<<high<<" ";
    // string sub = "";
    // mocha>>sub;
    stk.push(low);
    stk.push(high);
    int x =1;
    while((high = stk.pop())!=-1 && (low = stk.pop())!=-1){
        // cout<<"\n#################LOW:"<<low<<"  HIGH:"<<high<<"\n";
        // cout<<"\n\tStackPass "<<x++<<"  \n";
        // cout<<"POPPED:"<<popped<<"\n";

        // mocha>>low>>high;
        // mocha.clear();
        itr = low;
        pivot = high;
        // popped = "";
        while(itr != pivot){
            // cout<<"\n\tWhilePass\n";
            // cout<<"ITR:"<<itr<<" PIVOT:"<<pivot;
            while(itr>=0 && itr<pivot){
                // cout<<"\n\tStage W1\n";

                if(array[itr] > array[pivot]){
                    //SWAP
                    // cout<<"Swapped:";
                    int temp = array[itr];
                    array[itr] = array[pivot];
                    array[pivot] = temp;

                    int t = pivot;
                    pivot = itr;
                    itr = t;
                    // pivot = itr+pivot;
                    // itr = pivot-itr;
                    
                    //-----------------------------------
                    // int i=0;
                    // while(i<len){
                    //     cout<<array[i++]<<" ";
                    // }
                    // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
                    //-----------------------------------
                    
                    break;
                }
                itr++;
                
                //-----------------------------------
                // int i=0;
                // while(i<len){
                //     cout<<array[i++]<<" ";
                // }
                // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
                //-----------------------------------
            }

            while(itr<len && itr>pivot){
                // cout<<"\n\tStage W2\n";

                if(array[itr] < array[pivot]){
                    //SWAP
                    // cout<<"Swapped:";
                    int temp = array[itr];
                    array[itr] = array[pivot];
                    array[pivot] = temp;

                    int t = pivot;
                    pivot = itr;
                    itr = t;
                    
                    //-----------------------------------
                    // int i = 0;
                    // while(i<len){
                    //     cout<<array[i++]<<" ";
                    // }
                    // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
                    //-----------------------------------
                    
                    break;
                }
                itr--;
                //-----------------------------------
                // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
                // int i = 0;
                // while(i<len){
                //     cout<<array[i++]<<" ";
                // }
                // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
                //-----------------------------------
            }
        }
        // if(pivot == itr){
            // cout<<"\n\tStage I3\n";
            // cout<<"\n"<<"ITR:"<<itr<<">"<<array[itr]<<" "<<"PVT:"<<pivot<<">"<<array[pivot]<<"\n";
            if(pivot>=(low+2) && pivot<len){
                // cout<<"\nCALLED IF1\n";
                // cout<<"\nPOPPED:"<<popped<<"\n";
                // mocha.clear();
                // mocha<<low<<" "<<(pivot-1);
                // cout<<"LOW:"<<low<<" PIVOT-1:"<<pivot-1;
                // popped = "";
                // popped = mocha.str();
                // cout<<"\nPOPPED:"<<popped<<"\n";
                // stk.push(mocha.str());
                stk.push(low);
                stk.push(pivot-1);
                // cout<<"\n";
                // stk.peek();
            }
            if(pivot<=(high-2) && pivot>-1){
                // cout<<"\nCALLED IF2\n";
                // cout<<"\nPOPPED:"<<popped<<"\n";
                // mocha.clear();
                // mocha<<(pivot+1)<<" "<<high;
                // cout<<"PIVOT+1:"<<pivot+1<<" HIGH:"<<high;
                // popped = "";
                // popped = mocha.str();
                // cout<<"\nPOPPED:"<<popped<<"\n";
                // stk.push(mocha.str());
                stk.push(pivot+1);
                stk.push(high);
                // cout<<"\n";
                // stk.peek();
            }
        // }
        
        // if(x++ >= 20){break;}
    }
    cout<<"\nDONE!\n";
    int i = 0;
    while(i<len){
        cout<<array[i++]<<" ";
    }
    // cout<<"\n#########END##########\n";
}