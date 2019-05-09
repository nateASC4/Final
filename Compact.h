#ifndef COMPACT_H_
#define COMPACT_H_
#include <map>
#include <iostream>
using std::cout;
class LetterNode{
 private:

  std::string val;
  bool isTerminal;
  map <std::string, LetterNode*> hashMap;
  int nodeCount;

 public:

  LetterNode(std::string value) {
    this->val = value;
    isTerminal = true;
    nodeCount++;
  }
  char getVal(){
    return val;
  }
  void setVal(std::string value){
    this->val = value;
  }
  void addNode(std::string nodeName, std::string value){
    LetterNode* nodeName = new LetterNode(value);
    hashMap.insert(nodeName);
    isTerminal= false;
  }
  void checkNode(std::string value){

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
  int getSize();
  int size();
  void clear();
  void remove();
  void put();
  int get();
  boolean containsKey();
  boolean isEmpty();
};

#endif //COMPACT_H_
>>>>>>> f49c411a8ac2f65db0eac1d4efce0ade65f3507c
