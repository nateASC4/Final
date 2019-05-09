#ifndef NODE
#define NODE

#include <map>
#include <iostream>
using namespace std;

class Node{
    private:
        bool isTerminal;
        string value; // character held by Node object
        Node* parent = nullptr; // the node that this node comes from
        map <string, Node*> hashMap; // holds a list of all possible next nodes

    public:

        //constructor
        Node(string val)
        {
            value = val;
        }

        //retrieve the cahracter held in the node
        string getValue()
        {
            return value;
        }

        //change the value held by the node
        void setValue(string val)
        {
            value = val;
        }

        //insert a new node to the map of possible nodes
        void addNode(string val)
        {
            Node* node = new Node(val);
            hashMap.insert( pair<string, Node*> (value, node));
            isTerminal = false;
        }

        //checks the map if there is a node holding a certain letter
        bool checkFor(string val)
        {
            map<string, Node*>::iterator check;
            check = hashMap.find(val);

            if(check == hashMap.end())
            {
            hashMap.erase(check);
            return false;
            }

            else
            {
            hashMap.erase(check);
            return true;
            }
        }

        //returns a specific node from the map
        Node* getNode(string val)
        {
            return hashMap[val];
        }

        //erases a node from the map
        void removeNode(string val)
        {
            hashMap.erase(val);
        }

        //retrieves the value held by a specific node in the map
        string getNodeValue(string val)
        {
            return hashMap[val]->getValue();
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

#endif /* NODE */
