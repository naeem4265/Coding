#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Freed freopen ("0in.txt","r",stdin);
#define Fout freopen ("0out.txt","w",stdout);
#define ll long long int
#define pb push_back
#define pi acos(-1.0)
const ll limit = 1e6+5;
const ll Mod = 1e9+7;
using namespace std;

struct node{
    int val;
    node *next, *pre;
};

void add( node **head, node **tail, int key) {     
    node* newNode1 = new node;  
    newNode1 -> val = key;  
    newNode1 -> next = NULL;  

    if ( *head == NULL )  {  
        newNode1->pre = NULL;
        *tail = newNode1;
        *head = newNode1;  
        return;  
    }  
    node *temp = *tail;
    newNode1->pre = *tail;
    temp->next = newNode1;
    *tail = newNode1;  
    return;  
}  

void delet(node **head, int key) {
    node *temp = *head;
    while( temp != NULL ) {
        if( temp->val == key ) {
            if( temp->pre == NULL ) {
                *head = temp->next;
                temp->next->pre = NULL;
            } else {
                temp->pre->next = temp->next;
                temp->next->pre = temp->pre;
            }
            delete temp;
            return;
        }
        temp = temp->next;
    }
    cout <<key<<" not found\n";
}

void display(node *head ){
    while( head != NULL ) {
        cout <<head->val<<" ";
        head = head->next;
    }
    cout <<endl;
    return;
}

int  main()
{
    node *head = NULL, *tail=NULL;
    add(&head, &tail, 15); 
    add(&head, &tail, 20);
    add(&head, &tail, 30);  
    display(head);
    delet(&head, 20);
    delet(&head, 15);
    display(head);
}
