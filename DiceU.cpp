#include <iostream>
#include <cstdlib>
#include <time.h>
void sixSidedDice() {
  srand((unsigned) time(NULL)); 
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Spinning your dice now..."; 
  int diceRand = 1 + (rand() % 6);
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Your roll is..." << std::endl;
  std::cout << diceRand << std::endl;
}

void eightSidedDice() {
  srand((unsigned) time(NULL)); 
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Spinning your dice now..." << std::endl; 
  int diceRand = 1 + (rand() % 8);
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Your roll is..." << std::endl;
  std::cout << diceRand << std::endl;
}

void tenSidedDice() {
  srand((unsigned) time(NULL)); 
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Spinning your dice now..." << std::endl; 
  int diceRand = 1 + (rand() % 10);
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Your roll is..." << std::endl;
  std::cout << diceRand << std::endl;
}

void twelveSidedDice() {
  srand((unsigned) time(NULL)); 
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Spinning your dice now..." << std::endl; 
  int diceRand = 1 + (rand() % 12);
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Your roll is..." << std::endl;
  std::cout << diceRand << std::endl;
}

void twentySidedDice() {
  srand((unsigned) time(NULL)); 
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Spinning your dice now..." << std::endl; 
  int diceRand = 1 + (rand() % 20);
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Your roll is..." << std::endl;
  std::cout << diceRand << std::endl;
}

void mainpage() {
  std::cout << "Welcome to DiceU" << std::endl;
  std::cout << "Please press any key to continue" << std::endl;
  std::cin.get();
  std::cout << "\033[2J\033[1;1H";
  std::cout << "Please select which dice you want." << std::endl;
  std::cout << "1) Standard 6-sided dice\n2) 8-sided dice\n3) 10-sided dice\n4) 12-sided dice\n5) 20-sided dice" << std::endl;
  int diceInput;
  std::cin >> diceInput;
  if (diceInput == 1) {
    sixSidedDice();
  } else if (diceInput == 2) {
    eightSidedDice();
  } else if (diceInput == 3) {
    tenSidedDice();
  } else if (diceInput == 4) {
    twelveSidedDice();
  } else if (diceInput == 5) {
    twentySidedDice();
  }
}

int main() {
mainpage();   
}



