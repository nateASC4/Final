#include <iostream>
#include <fstream>
#include <string>
#include "compact.h"
using namespace std;

//We do not need a constructor


  void Compact::clear(){
    head = *nullptr;
  }

  void Compact::remove(string key){
    // this is a "hard method"
    //if node doesnt exist, then define
    //if other nodes coming from it then its different
    Node* temp = new Node(" ");
    temp = hashMap.find(key);
    bool checked = temp.Terminality();
    if(checked == true){

    }
    //look for a terminal NOde
    //check to see what it is tied to
    delete temp;
  }

  void Compact::put(String value){
    //put is basically get with
    //create new nodes if they dont exist and then track them
    hashMap.insert(newNode);
    hashMap.put("  ", newNode);
  }
  int Compact::get(){
    Node* temp = new Node(" ");
    for (int i = 0; i < map.size(); i++){
      if (temp == /**a character**/){
        temp = //that character
        return /** character**/;
      }
    }
  }

  int Compact::size(){
    return size;
  }

  bool Compact::containsKey(){
    Node temp;
    if (temp != hashMap.end())[
    
    ]
   }

  bool Compact:: isEmpty(){
    Node* temp = new Node(" ");
    if (temp* == nullptr){
      return true;
    }
    else {return false;}
    return false;
    delete temp;
  }

  int main(){
    Node* tester = new Node(" ");

  return 0;
  }

//NOde class shoiuld have
