#include <string>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>
using namespace std;
fstream vowelconsitituion;

// Welcome, this program will count selected letters in an appointed txt file and also give the total sum of selected letters combined.

const char A = 'A';
const char E = 'E';
const char I = 'I';
const char O = 'O';
const char U = 'U';
const char T = 'T';
const char K = 'K';
const char H = 'H';

//These are the constant characters of the capital vowels. They are variables that I will use to count.

const char a = 'a';
const char e = 'e';
const char i = 'i';
const char o = 'o';
const char u = 'u';
const char t = 't';
const char k = 'k';
const char h = 'h';

//These are the constant characters of the lowercase vowels. They are variables that I will use to count.

const char star = '*';
const char dot = '.';

//These are constant variables I will use for formatting.

int voweltotal = 0;
int numberOfA = 0;
int numberOfE = 0;
int numberOfI = 0;
int numberOfO = 0;
int numberOfU = 0;
int numberOfT = 0;
int numberOfK = 0;
int numberOfH = 0;

 //These are integers of the amount of each vowels there are, plus the total vowels combined. They are equal to zero but can change during the if statements. 

int main(int argc, char** argv) {

  //This line includes argc and argv. These variables allow for arguments to be passed into the main function from the command line.
  
	string line;
	fstream vowelconsitituion;
	vowelconsitituion.open(argv[1]);

  // In these line the file vowelconstitution is read and argv is an array that takes what is wirtten in the command line as an element of the array. argv[1] is written because the first argument is the file name, and the next argument is the program itself.
  
  cout << setw(58) << setfill(star) << star << endl;
  cout << setfill('*') << setw(10) << star << " Welcome to my Counting Letter Program! " << setfill('*') << setw(10) << star << endl;
  cout << setw(58) << setfill(star) << star << endl;
  cout << '\n';
  cout << "Analyzing selected '.txt' File" << endl;
  cout << '\n';

  // This automates the creation of the astericks using setw which selects the amount of characters and setfill which selects what character to fill it with.
  
	if (vowelconsitituion.is_open()) {
    char Letter;
    while (vowelconsitituion.get(Letter)) {
      //This is an if statement to determine whether the file of vowelconstituion is opened or not. .get reads the characters from the file and stores them into Letter. Below are more if statements that if one of the letters selected below gets read from the file and attributed to Letter, then it will add one for each letter there is in the txt file to the numberofletter variable as an integer. Both capital and lowercase letters are accounted for in the if statements. 
      if (Letter == A){
        numberOfA = numberOfA + 1;
      }
      if (Letter == E){
        numberOfE = numberOfE + 1;
      }
      if (Letter == I){
        numberOfI = numberOfI + 1;
      }
      if (Letter == O){
        numberOfO = numberOfO + 1;
      }
      if (Letter == U){
        numberOfU = numberOfU + 1;
      }
      if (Letter == T){
        numberOfT = numberOfT + 1;
      }
      if (Letter == K){
        numberOfK = numberOfK + 1;
      }
      if (Letter == H){
        numberOfH = numberOfH + 1;
      }
      if (Letter == a){
        numberOfA = numberOfA + 1;
      }
      if (Letter == e){
        numberOfE = numberOfE + 1;
      }
      if (Letter == i){
        numberOfI = numberOfI + 1;
      }
      if (Letter == o){
        numberOfO = numberOfO + 1;
      }
      if (Letter == u){
        numberOfU = numberOfU + 1;
      }
      if (Letter == t){
        numberOfT = numberOfT + 1;
      }
      if (Letter == k){
        numberOfK = numberOfK + 1;
      }
      if (Letter == h){
        numberOfH = numberOfH + 1;
      }
    }
  }

  voweltotal = numberOfA + numberOfE + numberOfI + numberOfO + numberOfU + numberOfT + numberOfK + numberOfH;

  //This is what the variable voweltotal equals to. It adds up all the variables together to get the sum of the integers counted.
  
  cout << left << setw(58) << setfill(dot) << "The number of A's" << numberOfA << endl;
  cout << left << setw(58) << setfill(dot) << "The number of E's" << numberOfE << endl;
  cout << left << setw(58) << setfill(dot) << "The number of I's" << numberOfI << endl;
  cout << left << setw(58) << setfill(dot) << "The number of O's" << numberOfO << endl;
  cout << left << setw(58) << setfill(dot) << "The number of U's" << numberOfU << endl;
  cout << left << setw(58) << setfill(dot) << "The number of T's" << numberOfT << endl;
  cout << left << setw(58) << setfill(dot) << "The number of K's" << numberOfK << endl;
  cout << left << setw(58) << setfill(dot) << "The number of H's" << numberOfH << endl;
  cout << left << setw(58) << setfill(dot) << "The vowel count is" << voweltotal << endl;

  // This line formats the ending by stating the amount of the selected letters there are and the sum of the amount. Sets width of 58 digits and setsfill replaces it with dots.
  
  return 0;

  //the program is ended.
}