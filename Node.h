/**
* Header file containing all the methods used for the wordMap
* @authors Nate Antwi Seraiah Kutai Jeff MacAbee Frederick Griffin CS 174
* @version 1.0 May 2019
* Note this version is not thread safe
* note credits are given in each function description to its author
*/
#ifndef NODE
#define NODE

#include <iostream>
#include <map>
using namespace std;

class Node; //declare node so that declaratoin of CPPMap can use node objects

class CPPMap// declare CPPMap and its methods so that when methods in Node are defined they can use these
{
    private:
        map<int, Node*> hashMap;//map object that is manipulated in each node by using CPPMap
        int size;//tells how many items are in the map
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
        bool isTerminal=true;
        string value; // character held by Node object
        Node* parent = nullptr; // the node that this node comes from
        CPPMap* NodeMap; // holds a list of all possible next nodes aka branches
        int number = 0; //used to create keys for each value that is put in the nodes map
    public:

        /**
        * Constructor for node
        * @param val string representation of the character
        * @author Nate Antwi
        */
        Node(string val)
        {
            value = val;
            NodeMap = new CPPMap();

        }
        /**
        * Destructor for node
        * @author Nate Antwi
        */
        ~Node()
        {
            delete NodeMap;
        }
        /**
        * function that retrieves the string value within the node it is called for
        * @return value string representation of the val inside the node
        * @author Jeff MacAbee
        */
        string getVal()
        {
            return value;
        }
        /**
        * function that changes the value held by the node
        * @return void
        * @author Jeff MacAbee
        */
        void setVal(string val)
        {
            value = val;
        }
        /**
        * finction that inserts a new node into the map
        * @param val string representation of the character being added
        * @return void
        * @author Seraiah Kutai
        */
        void addNode(string val)
        {
            number++;
            NodeMap->put(number, val);

        }
        /**
        * function that searches the map for a certain letter
        * @param val string representation of the letter
        * @return bool check bool representation of y/n
        * @author Nate Antwi
        */
        bool checkFor(string val) //contains value
        {
            return NodeMap->containsValue(val);
        }
        /**
        * function that returns a specific node from the map of possible next nodes
        * @param val string representation of the letter that the node holds
        * @return sendIt Node* that holds the specific letter
        * @author Frederick Griffin
        */
        Node* getNode(string val) //same as get()
        {
          Node* sendIt = new Node(" ");

          for(int i = 0; i < NodeMap->syze(); i++)
          {
              if(val == NodeMap->get(i)->getVal())
                  sendIt = NodeMap->get(i);
          }
          return sendIt;
        }
        /**
        * function that erases a node from the map of possible next nodes
        * @param val string representationof the letter contained in the target node
        * @return void
        * @author Seraiah Kutai
        */
        void removeNode(string val)
        {
            NodeMap->remove(val);
        }
        /**
        * function that retrives the value given by a specific node in the map
        * @param num int value of the placement of the node in the tree
        * @return string representation of the node value
        * @author Jeff MacAbee
        */
        string getNodeValue(int num)
        {
            return NodeMap->get(num)->getVal();
        }
        /**
        * Function that changes the current node to a terminal node
        * @return void
        * @author Frederick Griffin
        */
        void makeTerminal() //can be useful to tell if you're at the end of a word
        {
            isTerminal = true;
        }
        /**
        * Function that changes the current node to a nonterminal one
        * @return void
        * @author Nate Antwi
        */
        void makeNonTerminal() // can be useful to tell if you're not at the end of a word
        {
            isTerminal = false;
        }
        /**
        * function that tells the user if a node is terminal or not
        * @return isTerminal bool value of y/n
        * @author Seraiah Kutai
        */
        bool Terminality()
        {
            return isTerminal;
        }
        /**
        * fucntion that links the current node to a previous one in the tree
        * @param par Node* that will act as the parent node
        * @return void
        * @author Nate Antwi
        */
        void setParent(Node* par) //useful for allowing movement up the tree
        {
            parent = par;
        }
        /**
        * fucntion that gives the user the parent of the current node
        * @return parent Node* that is the parent node
        * @author Seraiah Kutai
        */
        Node* getParent() // can be useful for moving back up the tree
        {
            return parent;
        }
      };


/////////////////////////////////////////////////////////////////////////


/**
* function that gives the size of the map
* @return size int value of the size of the map
* @author Frederick Griffin
*/
int CPPMap::syze() // this is supposed to be size but the map class already has a method with that name
{
    return size;
}
/**
* fucntion that gives a list of all the values held in the map
* @return entries string representation of all the values, wrapped in braces
* @author Nate Antwi
*/
string CPPMap::entrySet() // an example output would be "[a,b,c]"
{
    int num = 0;
    string entries = "[";//the string that is returned
    for (auto it = hashMap.cbegin(); it != hashMap.cend(); ++it)//itterate through the map
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
/**
* function that gives a list of all the keys held in the map
* @return keys string representation of the keys wrapped in braces
* @author Jeff MacAbee
*/
string CPPMap::keySet() //an example output would be "[1,2,3]"
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
};
/**
* function that clears all keys and values in the map
* @return void
* @author Seraiah Kutai
*/
void CPPMap::wipe() //would be clear but map has a function called clear
{
    hashMap.clear();
    size = 0;
}
/**
* function that lists out all the keys and values in the map
* @return list string representation of the  kays and values as ordered pairs wrapped in braces
* @author Jeff MacAbee
*/
string CPPMap::values() //an example output would be "[(1,a), (2,b), (3,c)]"
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
/**
* function that copies all the keys in values into hashMap
* @param otherMap map<int, Node*> map that preexisted
* @return void
* @author Seraiah Kutai
*/
void CPPMap::putAll(map<int, Node*>otherMap)
{
for (std::map<int, Node*>::iterator it=otherMap.begin(); it!=otherMap.end(); ++it)
{
hashMap.insert(pair<int, Node*> ((*it).first, (*it).second)); //hashMap is this objects map
size++;
}
}
/**
* Function that iterates through the map for a node that contains the same string as val and deletes the target node
* @param val string value of a letter
* @return void
* @author Frederick Griffin
*/
void CPPMap::remove(string val)
{
  for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
  {
    if (it->second->getVal() == val){
    hashMap.erase(it);
	  size--;
	  }
  }
}
/**
* function that adds a new key and value to the map
* @param key int value of the key
* @param val string value of the letter
* @return void
* @author Nate Antwi
*/
void CPPMap::put(int key, string val)
{
    Node* node = new Node(val);
    hashMap.insert( pair<int, Node*> (key, node));
    size++;
}
/**
* function that retrieves a value from the map and returns its node
* @param key int value of the node
* @return node Node* the node that gets returned, correlates with int key
* @author Jeff MacAbee
*/
Node* CPPMap::get(int key) {
	Node* node = new Node(" 0 ");
	if(containsKey(key))
	return hashMap[key];
	else
		return node;
}
/**
* function that checks the map for a node that holds the string value equal to val
* @param val string representation of the letter that will be searched for
* @return temp bool value that represents whether or not val is in the map or not
* @author Seraiah Kutai
*/
bool CPPMap::containsValue(string val) {
    bool temp = false;

for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
{
    if (it->second->getVal() == val)
    temp = true;
}
return temp;
}
/**
* function that checks the map for a key that matches the val passed
* @param val int value of the key of a particular node to be searched for
* @return temp bool value of whether the key exists or not within the map
* @author Nate Antwi
*/
//checks to see if the map has a key in it that is the same as val
bool CPPMap::containsKey(int val) {
	Node* node = hashMap[val];
  bool temp;
    if(node == nullptr){
      temp = false;
    }
    else{
      temp= true;
    }
    return temp;
}
/**
* Function that checks to see if the map size is equal to zero
* @return temp bool that is whether or not the map size is zero
* @author Frederick Griffin
*/
bool CPPMap::isEmpty() {
  bool temp;
  if (size == 0){
    temp= true;
  }
  else{
    temp=false;
  }
    return temp;
}

#endif /* NODE */
