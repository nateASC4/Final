#include <iostream>
using std::cout;

class IntNode {
  
private:
  int val;
  IntNode * next;

public:

  IntNode(int value){
    this->val = value;
    next = nullptr;
  }

  int getVal() {
    return val;
  }

  void setVal(int value) {
    this->val = value;
  }

  IntNode* getNext() {
    return next;
  }

  void setNext(IntNode * next) {
    this->next = next;
  }

  bool hasNext() {
    return next != nullptr;
  }

};

class IntQueue{
private:
public:

  IntQueue();
  int peek();
  int pop();
  void push(int number);


};

class IntStack{
private:
public:
  IntStack();
  int peek();
  void push(int val);
  int pop();


};
