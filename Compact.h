#ifndef COMPACT_H_
#define COMPACT_H_
#include <map>
#include <iostream>
using namespace std; //std::cout;

<<<<<<< HEAD
class LetterNode{
 private:

  string val;
  bool isTerminal;
  map <std::string, LetterNode*> hashMap;
  int nodeCount;
  char charVal;
 public:

  LetterNode(string value)//check this line
  //  this std::string value within the parameters gives an error
  //  /*std::string value*/
   {
    this->val = value;
    isTerminal = true;
    nodeCount++;
  }
  char getVal(){
    return charVal;
  }

  void setVal(string value){
    //this std::string value within the parameters gives an error
    ///*std::string value*
    this->val = value;
  }

  void addNode(string value){
    LetterNode* newestNode = new LetterNode(value);
    hashMap->insert((newestNode); //hashMap was not declared in this scope
    isTerminal= false;
  }
  void checkNode(std::string value){

  }
};


class Compact{
 private:
  LetterNode* head;
=======
class Compact{
 private:

  //std::vector<char> arr; Didn't Grissom tell us not to do this?
>>>>>>> 1bec1ef82ae8389e546ad6ff1306b9b7a0840899
  int size;

 public:

  Compact(char value) {

  }
  void add(char value);
  void remove(int index);
  bool checkWord(std::string word);
  void printArr();
  int getSize();
  int trackSize();
  void clear();
  void remove();
  void put();
  int get();
  bool containsKey();
  bool  isEmpty();
};

#endif //COMPACT_H_
//>>>>>>> f49c411a8ac2f65db0eac1d4efce0ade65f3507c
