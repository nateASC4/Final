#include "Node.h"
#include <iostream>
using namespace std;
  int main(){
    Node* test = new Node(" ");
    test->setVal("c");
    test->addNode("o");
    test->addNode("m");
    test->addNode("p");
    test->addNode("u");
    test->addNode("t");
    test->addNode("e");
    cout<< "checking for the letter u \n" ;
    cout<< "the letter u is there: ";
    bool checkForIt = test->checkFor("u");
    string outBool;
    if(checkForIt == 1){
      outBool = "true";
    }
    else{
      outBool = "false";
    }
    cout<< outBool;
    cout<< "\n";
    Node* getIt;
    getIt = test->getNode("t");
    cout<<"value should be t \n";
    cout<< "value is: ";
    cout<< getIt->getVal();
    return 0;
    }
