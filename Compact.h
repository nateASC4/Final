#include <vector>
#include <iostream>
#ifndef COMPACT_H_
#define COMPACT_H_

using std::cout;

class LetterNode {

private:
  int val;
  LetterNode * nextRight;
  LetterNode * nextLeft;

public:

  LetterNode(char value){
    this->val = value;
    nextRight = nullptr;
    nextLeft = nullptr;
  }

  char getVal() {
    return val;
  }

  void setVal(char value) {
    this->val = value;
  }

  LetterNode* getNextRight() {
    return nextRight;
  }
  LetterNode* getNextLeft(){
    return nextLeft;
  }
  void setNextRight(LetterNode * next) {
    this->nextRight=next;
  }
  void setNextLeft(LetterNode* next){
    this->nextLeft = next;
  }
  bool hasNextRight() {
    return nextRight != nullptr;
  }
  bool hasNextLeft(){
    return nextLeft != nullptr;
  }

};
class Compact{
 private:
  LetterNode* head;
  std::vector<char> arr;
  int size;
 public:
  Compact(char start){
    head->setNextRight(nullptr);
    head->setNextLeft(nullptr);
    size++;
    head->setVal(start);
    arr.push_back(start);
  }
  void add(char value);
  void remove(char value);
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
#endif //COMPACT_H_
=======
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

>>>>>>> c384c7eacc6073cb2061fce9893b3aff2477d151
