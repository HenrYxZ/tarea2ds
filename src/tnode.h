
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
	tNode* _father;
	int _priority;
	bool _dummy;

public:
	// class constructor
	tNode(string key,int value);
	tNode(string key,int value,int priority);
	tNode(tNode* father);
	tNode& operator= (const tNode &tNodeSource);
	// class destructor
	~tNode();

	friend class treap;
	
	bool isDummy();
    int getPriority();
    int getValue();
	string getKey();
	tNode* Left();
	tNode* Right();
    tNode* Father();
    
    void setValue(int v);
	void setDummy();	
	void setLeft(tNode* lNode);
	void setRight(tNode* rNode);
	void unDummy(string k,int v, int p);
	void setFather(tNode* f);
	

};

#endif // NODE_H
