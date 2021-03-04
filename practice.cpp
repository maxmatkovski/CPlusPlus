
 // All code from Course
 
        // Array Practice
 
 int values[4];
 
 values[0] = 88;
 values[1] = 123;
 values[2] = 7;
 values [3] = 4;

 cout << values[0] << endl;
 cout << values[1] << endl;
 cout << values[2] << endl;
 cout << values[3] << endl;
 
 

 double numbers[5] ={4.5,2.3,7.2,8,9.5};

 for (int i=0; i<5; i++){
     cout << "Element at index " << i << " is: " << numbers[i] << endl;
 }
 
 
 cout << "Initializing with 0 values" << endl;
 int numberArray[7]= {};

 for (int i=0; i<9; i++){
     cout << "Element at index " << i << ": " << numberArray[i] << endl;
 }
 
 string friends[4] = {"", "Ilan", "Kevin", "Isaac"};
 
 for (int i=1; i<4; i++){
     cout << "Friend " << i << " is " << friends[i] << endl;
 }
 
 


    string animals[2][3] = {
        {"fox", "dog", "cat"},
        {"mouse", "squirrel", "parrot"}
    };
    // [rows] [collums]
 
    for(int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << animals[i][j] << " " << flush;
        }
 
        cout << endl;
 
    }
 
     

     
     
 //    string months [2][6] = {
 //        {"Jan", "Feb", "Mar", "Apr", "May", "Jun"
 //        },
 //        {"Jul", "Aug", "Sept", "Oct", "Nov", "Dec"}
 //    };
 //
 //    for (int i=0; i<2; i++){
 //        for (int j=0; j<6; j++){
 //            cout << months [i][j] << " " << flush;
 //        }
 //
 //        cout << endl;
 //
 //    }
 //
 //    string dataTable [6][4] = {
 //        {"name", "rank", "gender", "year"},
 //        {"Jacob", "1", "boy", "2010"},
 //        {"Isabella", "1", "girl", "2010"},
 //        {"Ethan", "2", "boy", "2010"},
 //        {"Sophia", "2", "girl", "2010"},
 //        {"Michael", "3", "boy", "2010"}
 //    };
 //
 //    for (int i =0; i<6; i++){
 //        for (int j=0; j<4; j++){
 //            cout << dataTable[i][j] <<" "<< flush;
 //        }
 //
 //        cout << endl;
 //    }
     

 
 
 Two Dimensional Arrays
 
 int table [10][10] = {
     {1,2,3,4,5,6,7,8,9,10},
     {2,4,6,8,10,12,14,16,18,20},
     {3,6,9,12,15,18,21,24,27,30},
     {4,8,12,16,20,24,28,32,36,40},
     {5,10,15,20,25,30,35,40,45,50},
     {6,12,18,24,30,36,42,48,54,60},
     {7,14,21,28,35,42,49,56,63,70},
     {8,16,24,32,40,48,56,64,72,80},
     {9,18,27,36,45,54,63,72,81,90},
     {10,20,30,40,50,60,70,80,90,100}
 };
 
 for (int i=0; i<10; i++){
     for (int j=0; j<10; j++){
         cout << table[i][j] << " "<< flush;
     }
     cout << endl;
 }
 

 int values[]= {4,7,3,4,5};
 
 cout << sizeof(values) << endl;
 cout << sizeof(int) << endl;
 
 for (int i =0; i < sizeof(values)/sizeof(int); i++) {
     cout << values[i] << " " << flush;
 }
 
 cout << endl;
 
 
 
 Size of 2 Dimensional Arrays
 
 string animals [2][3] {
     {"fox", "cat", "mouse"},
     {"parrot", "dog", "bird"}
 };
 
 
 
 for(int i=0; i<sizeof(animals)/sizeof(animals[0]); i++){
     for (int j=0; j<sizeof(animals[0])/sizeof(string); j++){
         cout << animals [i][j] << " " << flush;
     }
     cout << endl;
 }

 
 Switch Statement
 
 int value = 4;

 switch (value) {
     case 4:
         cout << "Value is 4." << endl;
         break;
     case 5:
         cout << "Value is 5." << endl;
         break;
     case 6:
         cout << "Value is 6." << endl;
         break;
     default:
         cout << "Hello sorry" << endl;
 }
 
 
 Declaring Functions
 
 void showMenu (){
     cout << "1. Search" << endl;
     cout << "2. View Record" << endl;
     cout << "3. Quit" << endl;
 }

 void exitMessage (){
     cout << "Thank you goodbye." << endl;
 }

 int main() {

     showMenu();
     
     exitMessage();
     
     return 0;
 }

 
 Return Values
 
 int selection (){
     cout << "Enter a selection: " << flush;
     
     int choice;
     cin >> choice;
     
     return choice;
 }

 int main() {
     
     int choice = selection();

     cout << choice << endl;

     switch (choice) {
         case 1:
             cout << "Searching" << endl;
             break;
         case 2:
             cout << "Viewing" << endl;
             break;
         case 3:
             cout << "Quiting" << endl;
             break;

         default:
             cout << "No corresponding choices" << endl;
             break;
     }
     
 
 Passing Values and Function Parameters
 
 void welcomeMessage(){
     cout << "Welcome to our menu" << endl;
 }

 int getInput (){
     cout << "Enter a selection: " << flush;
     
     int choice;
     cin >> choice;
     
     return choice;
 }

 void processInput(int a){
     switch (a) {
         case 1:
             cout << "Searching" << endl;
             break;
         case 2:
             cout << "Viewing" << endl;
             break;
         case 3:
             cout << "Quiting" << endl;
             break;
         default:
             cout << "No corresponding choices" << endl;
             break;
     }
 }

 int main() {
     
     welcomeMessage();
     int choice = getInput();
     processInput(choice);

     
     return 0;
 }
 
 // More practice on passing variables and shit
 void welcomeScreen (){
     cout << "What's your name > " << flush;
 }

 string friendInput (){
     string name;
     cin >> name;
     
     return name;
 }

 void friendCheck (string friendd){
     if (friendd == "Ilan"){
         cout << "You're my best friend" << endl;
     }
     else if (friendd == "Kevin" || friendd == "Isaac"){
         cout << "You're also my friend" << endl;
     }
     else
         cout << "You're not my friend" << endl;
 }

 int main (){
     
     welcomeScreen();
     string name = friendInput();
     friendCheck(name);
     
     return 0;
 }

 More passing value practice
 
 #include <iostream>
 using namespace std;

 void numberPrompt (){
     cout << "Enter a number > " << flush;
 }

 int numberInput (){
     int number;
     cin >> number;
     
     return number;
 }

 bool evenNumberCheck (int input){
     int result;
     result = input % 2;
     
     if (result == 1){
         return 1;
     }
     else{
         return 0;
     }
 }

 void printResult (int boool){
     int number;
     
     if (boool == 0){
         cout << number << " is an even number" << endl;
     }
     else{
         cout << number <<" is an odd number" << endl;
     }
 }


 int main (){
     
     numberPrompt();
     int number = numberInput();
     int value = evenNumberCheck(number);
     printResult(value);
 }

 More Practice Functions
 
 int number (){
     cout << "Enter a value > " << flush;
     
     int number;
     cin >> number;
     
     return number;
 }

 string word (){
     cout << "Enter a name > " << flush;
     
     string name;
     cin >> name;
     
     return name;
 }

 void endMessage (){
     cout << "End of Program" << endl;
 }

 int main (){
     
     int numberValue = number();
     string wordChoice = word();
     
     for (int i=1; i <= numberValue; i++){
         cout << wordChoice << " " << i << endl;
     }
     
     endMessage();
      
 }

 
 Practice with Header Files
 
 #include <iostream>
 #include "utils.h"

 using namespace std;

 int main () {
     
     doSomething();
     doSomething();
     printBye();
     
     return 0;
 }

 void doSomething (){
     cout << "Hello" << endl;
 }

 void printBye (){
     cout << "Bye" << endl;
 }

 
 Classes
 
 First Write Functions In Separate CPP File
 
 void jump (){
     cout << "Rabbit Jumps" << endl;
 }

 void eatCarrot (){
     cout << "Rabbit Eats Carrot" << endl;
 }
 
 Declare Functions in Prototype Header File
 
     #ifndef Rabbit_h
     #define Rabbit_h

     void jump ();
     void eatCarrot();

     #endif /* Rabbit_h

Paste Functions In Header File into Class

 class Rabbit {
 public:
     void jump ();
     void eatCarrot();
 };
 
 Add Class Into CPP File
 
     #include <stdio.h>
     #include <iostream>
     #include "Rabbit.h"

     using namespace std;

     void Rabbit:: jump (){
         cout << "Rabbit Jumps" << endl;
     }

     void Rabbit:: eatCarrot (){
         cout << "Rabbit Eats Carrot" << endl;
     }

 Implement Class In Int Main
 
     int main (){
         
         Rabbit rabbit1;
         rabbit1.eatCarrot();
         rabbit1.jump();
         
         
         return 0;
     }
 
 
 
