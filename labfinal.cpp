#include<iostream>
using namespace std;
int arr38[100];
#define SIZE 100
 
class STACK
{
    public:
        int num[SIZE];
        int top;
    public:
        
        STACK(){
            top=-1;
        }
        int empty(){
            if(top==-1)  return 1;
            else return 0;
        }
        int full(){
             if(top==(SIZE-1)) return 1;
             else return 0;
        }
        int push(int n){
    
        if(full()) return 0;
       
        ++top;
        num[top]=n;
        return n;
        }
        int pop(){
        int temp;
        if(empty())
        return 0;
        temp=num[top];
        --top;
        return temp;
        }
        void display(){
        int i; 
        cout<<"STACK is: ";
        for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
        cout<<endl;
        }
        int travs_stack(){
        int i; 
       
        for(i=(top); i>=0; i--)
        return num[i];
        }
 
}; 
class Queue{
   private:
    int front=-1;
    int rare=-1;
    int arr[100];
    int size=100;
   public:
    void enqueue(int x){
      
          if((rare==size-1 && front==0) || (rare+1==front) ){
            cout<<"queue is full"<<'\n';
          }else if(front==-1){
            front=rare=0;
            arr[rare]=x;
          }else if(rare==size-1 && front!=0){
            rare=0;
            arr[rare]=x;
          }else{
            rare+=1;
            arr[rare]=x;
          }
    }
    void dequeue(){
        if(front==-1){
          cout<<"queue is empty"<<'\n';
          
        }
        int data=arr[front];
        if(front==rare){
          front=-1;
          rare=-1;
        }else if(front==size-1){
          front=0;
        }else{
          front+=1;
        }
       
    }
    void display(){
      if(front==-1){
        cout<<"queue is empty"<<'\n';
      }
      if(rare>=front){
        for(int i=front;i<=rare;i++) cout<<arr[i]<<" ";
      }else{
        for(int i=front;i<size;i++) cout<<arr[i]<<" ";
        for(int i=0;i<=rare;i++) cout<<arr[i]<<" ";
      }
    }
};

int main(){
    for(int i=0;i<100;i++)arr38[i]=i;

    STACK s38;
    for(int i=0;i<100;i++)s38.push(arr38[i]);
    Queue q;
   
    

    for(int i=(s38.top); i>=0; i--){
        int x=s38.num[i];
         if(x%2==1)q.enqueue(x);
        }
    q.display();
    



}
