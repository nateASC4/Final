#ifndef COMPACT_H_
#define COMPACT_H_
#include <vector>
#include <iostream>
using std::cout;
class LetterNode{
 private:

  char val;
  LetterNode* nextLeft;
  LetterNode* nextRight;
  bool isTerminal;

 public:

  LetterNode(char value) {
    this->val = value;
    nextLeft = nullptr;
    nextRight = nullptr;
    isTerminal = true;
  }
  char getVal(){
    return val;
  }
  void setVal(char value){
    this->val = value;
  }
  LetterNode* getNextRight(){
    return nextRight;
  }
  LetterNode* getNextLeft(){
    return nextLeft;
  }
  void setNextRight(LetterNode* nextRt){
    this->nextRight = nextRt;
    isTerminal = false;
  }
  void setNextLeft(LetterNode* nextLf){
    this->nextLeft = nextLf;
    isTerminal = false;
  }
  bool hasNextRight(){
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

  Compact(char value) {
    head->setVal(value);
    head->setNextRight(nullptr);
    head->setNextLeft(nullptr);
    size++;
    arr.push_back(value);
  }
  void add(char value);
  void remove(int index);
  bool checkWord(std::string word);
  void printArr();
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
>>>>>>> f49c411a8ac2f65db0eac1d4efce0ade65f3507c
