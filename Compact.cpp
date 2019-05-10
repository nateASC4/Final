#include <iostream>
#include <fstream>
#include <string>
#include "compact.h"
using namespace std;

//We do not need a constructor


  void Compact::clear(){
    head = *null;
  }

  void Compact::remove(string key){
    Node* temp = new Node(" ");
    temp = hashMap.find(key);
    bool checked = temp.Terminality();
    if(checked == true){
      
    }
    //look for a terminal NOde
    //check to see what it is tied to
  }

  void Compact::put(String value){
    LetterNode* newNode = new LetterNode(value);
    hashMap.insert(newNode);
  }

  int Compact::getSize(){
    return size;
  }

  bool Compact::containsKey(){

   }
  bool Compact:: isEmpty(){

  }

  //NOde class shoiuld have
