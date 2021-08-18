#include <iostream>
#include <string>
using namespace std;

string name;
int input;

int main() {
  cout << "Hello there, user. I will be your guide through this journey." << endl;
  cout << "Before we can start, please tell me your name." << endl;
  cout << "Enter your name here:";
  cin >> name;
  cout << "Greetings, " + name << endl;
  cout << "In this game, there will be several questions that will determine your destiny. So choose wisely." << endl;
  cout << "For each question, you'll get two options: yes & no." << endl;
  cout << "In some special cases though, there will be a 3rd option: I don't know." << endl;
  cout << "Type in 0 for yes, 1 for no, and 2 for I don't know (if applicable)." << endl;
  cout << "Are you ready to start your adventure? Yes - 0, No - 1" << endl;
  cin >> input;
}