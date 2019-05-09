#ifndef COMPACT_H_
#define COMPACT_H_
#include <map>
#include <iostream>
using namespace std; //std::cout;

class Compact{
 private:
  
  //std::vector<char> arr; Didn't Grissom tell us not to do this?
  int size;

 public:

  Compact(char value) {
    //head->setVal(value); line gives an error
    //head->setNextRight(nullptr);
    //head->setNextLeft(nullptr);
    //size+; this line gives as error
  //  arr.push_back(value); // not declared in this scope
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
