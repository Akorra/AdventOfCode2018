#include <iostream>
#include <fstream>
#include <vector>

int main(){
  char stray;
  int count=0, sub;
  std::ifstream file("bin/input.txt");
  std::vector<int> abcde(26, 0);
  std::string polymer;

  file >> polymer;
  for(char &u : polymer){
    sub = (u >= 'a') ? (u-'a'):(u-'A');
    abcde[sub]++;
    if(abcde[sub]>count){
      count = abcde[sub];
      stray = u;
    }
  }
  std::cout << stray << " - " << count;
}
