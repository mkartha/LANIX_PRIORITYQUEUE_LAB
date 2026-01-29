/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"



/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item, int priority)
{

    Node* ph=new Node;
    ph->data=item;
    ph->priority=priority;
    if(front->next==nullptr){
        front->next=ph;
    }
    else{
        Node* n=&front->next;
        while(n->next!=nullptr && n->priority<n->next->priority){
            n=n->next;
        }
        if(n->next!=nullptr){
            Node* tmp=n->next;
            n->next=ph;
            ph->next=tmp;
        }
        else{
            n->next=ph;
        }
        
    }
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
    if(front->next==nullptr){
        return NULL;
    }
    else{
        return front->next;
    }
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
 if(front->next==nullptr || front->next->next==nullptr){
        return NULL;
    }
    else{
        Node* tmp= front->next;
        front->next=front->next->next;
        return tmp;
    }}

/*
 * Print Priority Queue
 */
void PQueue::display()
{
    if(front->next==nullptr){
        std::cout<<""<<endl;
    }
    ptr=front->next;
    while(ptr->next!=nullptr){
        std::cout<<ptr->priority<<" "<<(char*)ptr->data<<std::endl;
        ptr=ptr->next;

    }
	/* Use the following out command for the data */

}
	