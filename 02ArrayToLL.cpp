// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i=1;i<arr.size();i++){
       Node* temp = new Node(arr[i]);
       mover->next=temp;
       mover=temp;
   }
   return head;
}
int main() {
    // Write C++ code here
   vector<int>arr ={1,2,3,4,5};
//   Node* y = new Node(arr[0],nullptr);
//   cout<<y->data;
Node* head = convertArr2LL(arr);
cout<<head->data;
}
