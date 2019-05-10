<<<<<<< HEAD
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
=======
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
>>>>>>> 1a0f318bad9b94f91c82d4dfdc0e2c957902c317
