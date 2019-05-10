#include <iostream>
#include <fstream>
#include <string>
#include "compact.h"
using namespace std;

//We do not need a constructor
  int Compact::size(){
    return size;
  }

  void Compact::clear(){
    head = null;
  }

  void Compact::remove(){

  }

  void Compact::put(){
    LetterNode newNode = new LetterNode();
  }

  int Compact::get(int index){  // return value of the given Node at particular index

  }

  boolean Compact::containsKey(std::string finder){
    LetterNode letter = hashMap.find(finder);
    if( letter != nullptr){
       return false;
    }
    else{
      return true;
    }
  }


  boolean Compact:: isEmpty(){
    if(head == nullptr){
      return true;
    }
    else{
      return false;
    }
  }

  //Node class should have
