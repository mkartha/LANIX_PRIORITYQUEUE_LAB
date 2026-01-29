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

struct Node
{
	int priority;
	void* data;
	struct Node *next;
};



class PQueue
{

	private:
		Node *front;

	public:
	PQueue()
	{
		front = NULL;
	}
		
	void push(void *item, int priority);
	Node* top();
	Node* pop();
	void display();


};