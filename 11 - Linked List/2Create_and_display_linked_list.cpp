#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int>Linked_list;
    int n;
    cout<<"Enter size of linked List =";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter a Number";
        int k;
        cin>>k;
        Linked_list.push_back(k);
    }
    for(auto x:Linked_list){
        cout<<x<<" ";
    }
    return 0;
}