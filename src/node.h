// Class automatically generated by Dev-C++ New Class wizard

#ifndef NODE_H
#define NODE_H

#include <string>
/*
 * No description
 */
using namespace std; 
 
class Node
{
    private:
            bool _isRed;
            Node * _father, * _left, * _right;
            int _value, _high;
            string _key;  
      
	public:
		// class constructor
		Node(string key, int value);
		// class destructor
		~Node();
        
        //geters
		Node* getLeft();
		Node* getRight();
		Node* getFather();
		Node* getBrother();
		
		Node* inOrder();
		Node* maxLeft(Node* n);   //devuelve el nodo m�s a la izquierda
        
		int getValue();
		string getKey();
		bool isRed();
		int getHigh();
		
        //seters
		void setValue(int v);
		void setKey(string k);
		void setLeft(Node* lnode);
		void setRight(Node* rnode);
		void setFather(Node* fnode);
		void setisRed(bool is);
		void recolor();
		void setHigh(int h);
		
		
		
};

#endif // NODE_H
