// Class automatically generated by Dev-C++ New Class wizard
#include <string>
#ifndef ABB_H
#define ABB_H
using namespace std;
/*
 * No description
 */
class ABB
{
    public:
	ABB();
	~ABB();
	virtual void insert(string k,int v) = 0;
	virtual void remove(string k) = 0;
	virtual int find(string k) = 0; //retorna value
	virtual int min() = 0;
	virtual int max() = 0;
};

#endif // ABB_H
