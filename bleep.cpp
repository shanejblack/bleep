#include <iostream>
#include <string>

int main() {

  std::string word = "broccoli";
  std::string sentence = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

  bleep(word, sentence);
  
  for (int i = 0; i < sentence.size(); i++) {
    
    std::cout << sentence[i];
    
  }
  
  std::cout << "\n";

}
