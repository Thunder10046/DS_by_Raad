#include<iostream>
#include<fstream>
using namespace std;
struct Node{
  Node *ll;
  int data;
  Node *rl;
};

Node *ax[50];
Node *h,*p;

int main(){
 ifstream file;
 int ll[50];
 int data[50];
 int rl[50];
 file.open("mytext.txt");
 int i=1,n;
 while(file>>ll[i]){
    file>>data[i];
    file>>rl[i];
    i++;
 }
 n=i-1;
 for(i=1;i<=n;i++)
    cout<<ll[i]<<" "<<char(data[i])<<" "<<rl[i]<<endl;

 for(i=1;i<=n;i++)
    ax[i]=new Node();

 for(i=1;i<=n;i++)
    cout<<"Node "<<char(i+64)<<" "<<ax[i]<<endl;

 ax[0]=0;
 h=ax[1];
 for(i=1;i<=n;i++){
    ax[i]->data=data[i];
    ax[i]->ll=ax[ll[i]];
    ax[i]->rl=ax[rl[i]];
 }
 cout<<endl<<"The Tree is"<<endl;
 for(i=1;i<=n;i++){
    cout<<ax[i]->ll<<" "<<char(ax[i]->data)<<" "<<ax[i]->rl<<endl;
 }

}
