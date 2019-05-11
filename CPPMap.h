#ifndef CPPMAP
#define CPPMAP

#include <iostream>
#include <map>
#include "Node.h"
using namespace std;

class CPPMap
{
private:
    map<int, Node*> hashMap;
    int size = 0;
public:
CPPMap()
{
}
~CPPMap()
{
}

int syze() // size
{
    return size;
}

/*
string entrySet()
{
    string entries = "[";
    for (auto it = hashMap.cbegin(); it != hashMap.cend(); ++it)
    {
        entries = entries + (*it).second->getVal();

    }
}
*/

Node* get(int key) {
	return hashMap[key];
}

bool containsValue(string val) {
    bool temp = false;

for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
{
    if (it->second->getVal() == val)
    temp = true;
}
return temp;
}

bool containsKey(int val) {
    //use count
	Node* node = hashMap[val];
    if(node = nullptr)
    return false;
    else 
    return true;
}

bool isEmpty() {
	if (size == 0)
    return true;
    else
    return false;
}

};

#endif /* CPPMAP */