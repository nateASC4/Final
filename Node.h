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
        bool isTerminal;
        string value; // character held by Node object
        Node* parent = nullptr; // the node that this node comes from
        CPPMap* NodeMap; // holds a list of all possible next nodes aka branches
        int number = 0; //used to create keys for each value that is put in the nodes map
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

        //returns a specific node from the map of possible next nodes
	//useful for moving to the next branch in a tree
        Node* getNode(string val) //same as get()
        {
          Node* sendIt = new Node(" ");

          for(int i = 0; i < NodeMap->syze(); i++)
          {
              if(val == NodeMap->get(i)->getVal())
                  sendIt = NodeMap->get(i);
          }
          return sendIt; //this may cause issues
        }

        //erases a node from the map of possible next nodes
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
	//tells if you are at the end of a word
        void makeTerminal()
        {
            isTerminal = true;
        }

        //changes the current node to a nonterminal one
	//tells if you are not at the end of a word
        void makeNonTerminal()
        {
            isTerminal = false;
        }

        //tells if the node is terminal or not
        bool Terminality()
        {
            return isTerminal;
        }
	//used to link the current node to the previous one in the tree
	//useful for allowing movement back up the tree
        void setParent(Node* par)
        {
            parent = par;
        }

        //gives the parent of the current node
	//useful for moving back up the tree
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
    };



/////////////////////////////////////////////////////////////////////////



int CPPMap::syze() // this is supposed to be size but the map class already has a method with that name
{
    return size;
}

//gives a list of all of the values held in the map
// an example of this would be a string that looked like: "[a,b,c]"
string CPPMap::entrySet()
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

//gives a list of all of the keys held in the map
//an example of what it looks like is: "[1,2,3]"
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
};

//gets rid of all keys and values in the map
void CPPMap::wipe() //would be clear but map has a function called clear
{
    hashMap.clear();
    size = 0;
}

//gives a list of all keys and values in the map
//an example of this would be: "[(1,a), (2,b), (3,c)]"
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

//takes a map object as input then coppies all of the keys and values into hashMap which is this objects map
void CPPMap::putAll(map<int, Node*>otherMap)
{
for (std::map<int, Node*>::iterator it=otherMap.begin(); it!=otherMap.end(); ++it)
{
hashMap.insert(pair<int, Node*> ((*it).first, (*it).second));
size++;
}
}

//looks through th map for a node that contains the same string as val
//when it finds such a node it deletes it
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

//adds in a new key and value to the map
void CPPMap::put(int key, string val)
{
    Node* node = new Node(val);
    hashMap.insert( pair<int, Node*> (key, node));
    size++;
}

//retrieves a value from the map
//in this case a node object pointer is returned
Node* CPPMap::get(int key) {
	Node* node = new Node(" 0 ");
	if(containsKey(key))
	return hashMap[key];
	else
		return node;
}

//checks the map if there is a node that holde a string that is the same as val
bool CPPMap::containsValue(string val) {
    bool temp = false;

for (std::map<int , Node*>::iterator it=hashMap.begin(); it!=hashMap.end(); ++it)
{
    if (it->second->getVal() == val)
    temp = true;
}
return temp;
}

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

//checks if the map size is equal to zero
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
