#include <iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int data){
this -> data = data;
}
};
class Queue {
public:
Node *head= NULL;
Node *newdata= NULL;
void enque(int item) { // Insert data in last
newdata = new Node(item);
if(head==NULL) {
head = newdata;
} else {
Node *temp = head;
while(temp -> next != NULL ) {
temp = temp -> next;
}
temp -> next = newdata;
newdata -> next = NULL;
}
}
int size() { // Count amount of data from 0
Node *temp= head;
int count = 0;
while(temp!= NULL) {
temp = temp->next;
count++ ;
}
return count;
}
bool isEmpty() { // return true if queue is empty
if(head == NULL)return true;
else return false;
}
void deque() { //Remove data from front
Node* temp = head -> next;
delete head;
head = temp;
}
int show() { // show first data
return head -> data;
}
void showAll(){ // show all data
for( int i = 0 ; i < size() ; i++ ){
int temp = show();
cout << temp << " ";
deque();
enque(temp);
}
}
};
int main(){
Queue* queueMain = new Queue();
int temp;
for( int i = 0 ; i < 5 ; i++ ){
cin >> temp;
queueMain -> enque(temp);
}
for( int i = 0 ; i < 5 ; i++ ){
if( queueMain -> show() >= 0){
temp = queueMain -> show();
queueMain -> deque();
queueMain -> enque(temp);
}
else{
queueMain -> deque();
}
}
queueMain -> showAll();
}
