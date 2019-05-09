#include <map>
#include <iostream>
using namespace std;
int main(){
    return 0;
}
class Node{
    private:
        bool isTerminal; 
        string value; // character held by Node object
        map <string, Node*> hashMap;

    public:
        Node(string val) 
        {
            value = val;
        }

        string getValue()
        {
            return value;
        }

        void setValue(string val)
        {
            value = val;
        }

        void addNode(string val)
        {
            Node* node = new Node(val);
            hashMap.insert( pair<string, Node*> (value, node));
            isTerminal = false;
        }

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

        Node* getNode(string val)
        {
            return hashMap[val];
        }

        void removeNode(string val)
        {
            hashMap.erase(val);
        }

        string getNodeValue(string val)
        {
            return hashMap[val]->getValue();
        }

        void makeTerminal()
        {
            isTerminal = true;
        }

        void makeNonTerminal()
        {
            isTerminal = false;
        }

        bool getterminality()
        {
            return isTerminal;
        }
};