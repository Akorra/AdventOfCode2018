#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

int main(){
  std::ifstream file("bin/input.txt");
  std::string polymer;
  char c1, c2;
  int count=0;

  file >> c1;
  polymer.push_back(c1);
  count++;
  while(file >> c2){
    if(std::abs(c1-c2) == 32){
      polymer.pop_back();
      count--;
      if(polymer.empty()){
        file >> c1;
        polymer.push_back(c1);
        count++;
      }else{
        c1 = polymer.back();
      }
    }else{
      c1 = c2;
      polymer.push_back(c2);
      count++;
    }
  }
  std::cout << count;
}
