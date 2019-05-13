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
    cout<< "checking for the letter n \n" ;
    cout<< "the letter n is there: ";
    bool checkForItAgain = test->checkFor("n");
    string outBoolTwo;
    if(checkForItAgain == 1){
      outBoolTwo = "true";
    }
    else{
      outBoolTwo = "false";
    }
    cout<< outBoolTwo;
    cout<< "\n";
    test->addNode("s");
    test->removeNode("s");
    cout<< "checking for the letter s \n" ;
    cout<< "the letter s is there: ";
    bool checkForItThrice = test->checkFor("s");
    string outBoolThree;
    if(checkForItThrice == 1){
      outBoolThree = "true";
    }
    else{
      outBoolThree = "false";
    }
    cout<< outBoolThree;
    cout<< "\n";
    string obtain= test->getNodeValue(2);
    cout<<"checking for value of node 2, should be m \n";
    cout<< "here is the value of node 2: ";
    cout<< obtain;
    cout<< "\n";
    test->getNode("e")->setParent(test->getNode("t"));
    test->getNode("t")->setParent(test->getNode("u"));
    test->getNode("u")->setParent(test->getNode("p"));
    test->getNode("p")->setParent(test->getNode("m"));
    test->getNode("m")->setParent(test->getNode("o"));
    test->getNode("o")->setParent(test->getNode("c"));
    
    Node* getIt;
    getIt = test->getNode("t");
    cout<<"value should be t \n";
    cout<< "value is: ";
    cout<< getIt->getVal();
    return 0;
    }
