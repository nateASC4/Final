#include "Node.h"
#include <iostream>
using namespace std;
class Node{
  int main(){
  CPPMap map = new CPPMap();
  cout<<"the initial size of the Map is: ";
  cout<< map->syze();
  string intial = "compute";
  for(int i = 1, i=intial->size(), i++){
    string addMe = intial->substr(i-1, i);
    map.put(i, addMe);
  }
  cout<<"the entry values are: "
  cout<<map.entrySet();
  cout<<"the key values are: "
  cout<<map.keySet();

  }
}
