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
Class Compact{
 private:
  LetterNode* head;
  std::vector<Character> arr;
  int size;
 public:
  Compact(Character start){
    head->setNextRight(nullptr);
    head->setNextLeft(nullptr);
    size++;
    head.setVal(start);
    arr.push(start);
  }
  void add(Character value);
  void remove(Character value);
  bool check(std::string word);
  void add(std::string word);
  void printElements();
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
