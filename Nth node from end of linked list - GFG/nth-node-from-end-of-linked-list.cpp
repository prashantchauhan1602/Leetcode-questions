//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int lenCount(Node* head)
{
    int count = 0 ;
    Node* temp = head;
    while(temp != NULL)
    {
        count++ ;
        temp = temp -> next ;
    }
    return count ;
}
int fetchElement(Node* head , int req_len)
{
    if(req_len <= 0)
    {
        return -1 ;
    }
    
    Node* temp = head ;
    int count = 1 ;
    while(count < req_len)
    {
        temp = temp -> next ;
        count++ ;
    }
    return (temp -> data);
}

int getNthFromLast(Node *head, int n)
{
       int length = lenCount(head);
       int req_len = length - n + 1 ;
       return fetchElement(head , req_len);
}

