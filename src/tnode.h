
#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>
#include "includes.h"
using namespace std;
class tNode
{
private:
	int _value;
	string _key;
	tNode* _left;
	tNode* _right;
	int _priority;
	bool _dummy;

public:
	// class constructor
	tNode(string key,int value);
	tNode(string key,int value,int priority);
	tNode();
	tNode& operator= (const tNode &tNodeSource);
	// class destructor
	~tNode();

	friend class treap;
	
	bool isDummy();
    int getPriority();
    int getValue();
	string getKey();
	tNode* getLeft();
	tNode* getRight();

	void setDummy();	
	void setLeft(tNode* lNode);
	void setRight(tNode* rNode);
	

};

#endif // NODE_H
