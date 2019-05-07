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
