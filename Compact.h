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
