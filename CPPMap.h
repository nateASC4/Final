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

int syze() // this is supposed to be size but the map class already has a method with that name
{
    return size;
}


string entrySet()
{
    int num = 0;
    string entries = "[";
    for (auto it = hashMap.cbegin(); it != hashMap.cend(); ++it)
    {
        entries = entries + (*it).second->getVal();
        if(num < size - 1)
        {
            entries = entries + ", ";
            num++;
        }
    }
    entries = entries + "]";
    return entries;
}

string keySet()
{
    int num = 0;
    string keys = "[";
    for (auto it = hashMap.cbegin(); it != hashMap.cend(); ++it)
    {
        keys = keys + to_string((*it).first);
        if(num < size - 1)
        {
            keys = keys + ", ";
            num++;
        }
    }
    keys = keys + "]";
    return keys;
}

void wipe() //would be clear but map has a function called clear
{
    hashMap.clear();
    size = 0;
}

string values()
{
    int num = 0;
    string list = "[";
for (std::map<int, Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
{
    list = list + "(" + to_string((*it).first) + ", " + (*it).second->getVal() + ")";
    if(num < size - 1)
    {
        list = list + ", ";
        num++;
    }
}
list = list + "]";
return list;
}

void putAll(map<int, Node*>otherMap)
{
for (std::map<int, Node*>::iterator it=otherMap.begin(); it!=otherMap.end(); ++it)
{
hashMap.insert(pair<int, Node*> ((*it).first, (*it).second));
size++;
}
}

void remove(string val)
{
    for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
    {
        if (it->second->getVal() == val)
        hashMap.erase(it);
    }
}

void put(int key, string val)
{
    Node* node = new Node(val);
    hashMap.insert( pair<int, Node*> (key, node));
    size++;
}

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