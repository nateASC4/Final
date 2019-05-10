#ifndef COMPACT_H_
#define COMPACT_H_
#include <map>
#include <iostream>
using namespace std; //std::cout;

class Compact{
 private:

  int size;

 public:

  Compact(string value) {
    size = 0;
  }


  void remove(int index);
  bool checkWord(string word);
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
