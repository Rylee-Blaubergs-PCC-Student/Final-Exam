// ------------- FILE HEADER -------------
// Author ✅: Rylee Blaubergs
// Assignment ✅: Final Exam
// Date ✅: 12/9/2025
// Citations: zyBooks and previous sample programs


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅:
// Challenge ✅: 
// Labs ✅: 


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 0
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅: 
// C. CALCULATIONS ✅: 
// D. LOGIC and ALGORITHMS ✅:



// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
using namespace std;


// fuction prototypes
void welcome();
void results();   
void goodBye();   
int readGoal(int goal);
int readInt();


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
// Declare input values
int goal = 0, miles = 0;

// Declare output values
int totalMiles = 0, milesOverUnder = 0;

// hidden values
int count = 0;


welcome();

goal = readGoal(goal);




goodBye();

   return 0;
}

void welcome() {
cout << "Welcome to my Miles Tracker program." << endl;
}

void results() {


}

void goodBye() {
cout << "Keep Riding!" << endl;
}

int readGoal(int goal) {
// Prompt user for goal
cout << "How many miles do you want to ride this week?";
// Read goal input
goal = readInt();

if (goal < 0) {
  cout << "No miles were tracked this week." << endl;
}

return goal;
}

int readInt() {
  int tempVar = 0;
  cin >> tempVar;
  while(!cin)
  {
    cout << "Invalid input! Please try again!!" << endl;
    cin.clear();
    cin.ignore(100, '\n');
    cin >> tempVar;
  }
  cin.ignore(10, '\n');
  return tempVar;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: 

Program Description: 

Design:
A. INPUT


B. OUTPUT


C. CALCULATIONS


D. LOGIC and ALGORITHMS


SAMPLE RUNS:





*/
