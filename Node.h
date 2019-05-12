#ifndef NODE
#define NODE

#include <iostream>
//#include "CPPMap.h"
#include <map>
using namespace std;

class Node;

class CPPMap
{
    private:
        map<int, Node*> hashMap;
        int size;
    public:
    int syze();
    string entrySet();
    string keySet();
    void wipe();
    string values();
    void putAll(map<int, Node*>otherMap);
    void remove(string val);
    void put(int key, string val);
    Node* get(int key);
    bool containsValue(string val);
    bool containsKey(int val);
    bool isEmpty();
};

class Node{
    private:
        bool isTerminal;
        string value; // character held by Node object
        Node* parent = nullptr; // the node that this node comes from
        CPPMap* NodeMap; // holds a list of all possible next nodes
        int number = 0;
    public:

        //constructor
        Node(string val)
        {
            value = val;
            NodeMap = new CPPMap();
        }

        ~Node()
        {
            delete NodeMap;
        }

        //retrieve the cahracter held in the node
        string getVal()
        {
            return value;
        }

        //change the value held by the node
        void setVal(string val)
        {
            value = val;
        }

        //insert a new node to the map of possible nodes
        void addNode(string val)
        {
            number++;
            NodeMap->put(number, val);
        }

        //checks the map if there is a node holding a certain letter
        bool checkFor(string val) //contains value
        {
            return NodeMap->containsValue(val);
        }

        //returns a specific node from the map
        Node* getNode(string val) //same as get()
        {
            for(int i = 0; i < NodeMap->syze(); i++)
            {
                if(val == NodeMap->get(i)->getVal())
                    return NodeMap->get(i);
            }
            return nullptr;
        }

        //erases a node from the map
        void removeNode(string val)
        {
            NodeMap->remove(val);
        }

        //retrieves the value held by a specific node in the map
        string getNodeValue(int num)
        {
            return NodeMap->get(num)->getVal();
        }

        //changes the current node to a terminal one
        void makeTerminal()
        {
            isTerminal = true;
        }

        //changes the current node to a nonterminal one
        void makeNonTerminal()
        {
            isTerminal = false;
        }

        //tells if the node is terminal or not
        bool Terminality()
        {
            return isTerminal;
        }

        void setParent(Node* par)
        {
            parent = par;
        }

        //gives the parent of the current node
        Node* getParent()
        {
            return parent;
        }
      };

    class Tri
    {
      private:
        Tri* head;
        Node isTerminal;
      public:
        Tri();
        ~Tri();
    }
  };


/////////////////////////////////////////////////////////////////////////



int CPPMap::syze() // this is supposed to be size but the map class already has a method with that name
{
    return size;
}


string CPPMap::entrySet()
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

string CPPMap::keySet()
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

void CPPMap::wipe() //would be clear but map has a function called clear
{
    hashMap.clear();
    size = 0;
}

string CPPMap::values()
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

void CPPMap::putAll(map<int, Node*>otherMap)
{
for (std::map<int, Node*>::iterator it=otherMap.begin(); it!=otherMap.end(); ++it)
{
hashMap.insert(pair<int, Node*> ((*it).first, (*it).second));
size++;
}
}

void CPPMap::remove(string val)
{
    for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
    {
        if (it->second->getVal() == val)
        hashMap.erase(it);
    }
	size--;
}

void CPPMap::put(int key, string val)
{
    Node* node = new Node(val);
    hashMap.insert( pair<int, Node*> (key, node));
    size++;
}

Node* CPPMap::get(int key) {
	return hashMap[key];
}

bool CPPMap::containsValue(string val) {
    bool temp = false;

for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
{
    if (it->second->getVal() == val)
    temp = true;
}
return temp;
}

bool CPPMap::containsKey(int val) {
	Node* node = hashMap[val];
    if(node = nullptr)
        return false;
    else
        return true;
}

bool CPPMap::isEmpty() {
	if (size == 0)
    return true;
    else
    return false;
}

#endif /* NODE */
