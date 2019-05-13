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
    cout<< "checking for the letter s, post add \n" ;
    cout<< "the letter s is there: ";
    bool checkForItQuatro = test->checkFor("s");
    string outBoolfour;
    if(checkForItQuatro == 1){
      outBoolfour = "true";
    }
    else{
      outBoolfour = "false";
    }
    cout<< outBoolfour;
    cout<< "\n";
    test->removeNode("s");
    cout<< "checking for the letter s, post remove\n" ;
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
    Node* getIt;
    getIt = test->getNode("t");
    cout<<"value should be t \n";
    cout<< "value is: ";
    cout<< getIt->getVal();
    cout<<"\n";
    test->getNode("e")->makeTerminal();
    bool termTest= test->getNode("e")->Terminality();
    string sendout;
    if(termTest==1){
      sendout = "true";
    }
    else{
      sendout="false";
    }
    cout<<"the terminality of the last node is: ";
    cout<< sendout;
    cout<< "\n";
    test->getNode("o")->setParent(test);
    string getItOut= test->getNode("o")->getParent()->getVal();
    cout<<"checking for the parent node of o, should be c \n";
    cout<<"the parent node of o is: ";
    cout<< getItOut;
    cout<<"\n";
    test->getNode("m")->setParent(test->getNode("o"));
    string getItOutm= test->getNode("m")->getParent()->getVal();
    cout<<"checking for the parent node of m, should be o \n";
    cout<<"the parent node of m is: ";
    cout<< getItOutm;
    cout<<"\n";
    return 0;
    delete test;
    }
