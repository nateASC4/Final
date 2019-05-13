#include "Node.h"
#include <iostream>
using namespace std;
  int main(){
    CPPMap* map = new CPPMap();
    cout<<"the initial size of the Map is: ";
    cout<< map->syze();
    string intial = "compute";
    for(int b = 1; b==intial.size(); b++){
      string addMe = intial.substr(b-1, b);
      map->put(b, addMe);
    }
    cout<<"the entry values are: ";
    cout<<map->entrySet();
    cout<<"the key values are: ";
    cout<<map->keySet();
    return 0;
    }
