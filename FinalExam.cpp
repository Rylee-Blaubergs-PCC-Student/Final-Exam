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
void results(int totalMiles, int goal, int milesOverUnder);   
void goodBye();   
void getInput(int &goal);
int readMiles(int miles, int count, int totalMiles);
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

getInput(goal);
if (goal < 0) {
  cout << "No miles were tracked this week." << endl;
} else if (goal > 0) {
    while (count != 8) {
   count++;
   totalMiles = readMiles(miles, count, totalMiles);     
}
}

cout << totalMiles << endl;

results(totalMiles, goal, milesOverUnder);
goodBye();

   
//end main
return 0;
}

void welcome() {
cout << "Welcome to my Miles Tracker program." << endl;
}

void goodBye() {
cout << "Keep Riding!" << endl;
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

int readMiles(int miles, int count, int totalMiles) {
switch(count) {
   case 1:
   cout << "How many miles did you ride on Sunday? ";
   miles = readInt();
   while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Sunday? ";
       miles = readInt();
   }
   totalMiles = totalMiles + miles;
      break;
   case 2:
      cout << "How many miles did you ride on Monday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Monday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   case 3:
      cout << "How many miles did you ride on Tuesday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Tuesday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   case 4:
      cout << "How many miles did you ride on Wednesday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Wednesday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   case 5:
      cout << "How many miles did you ride on Thursday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Thursday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   case 6:
      cout << "How many miles did you ride on Friday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Friday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   case 7:
      cout << "How many miles did you ride on Saturday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Saturday? ";
       miles = readInt();
   }
      totalMiles = totalMiles + miles;
      break;
   default:
      break;         
}
return totalMiles;
}

void results(int totalMiles, int goal, int milesOverUnder) {
// show total miles rode
cout << "You rode " << totalMiles << " miles this week." << endl;

// check if you met your goal
if (totalMiles == goal) {
    cout << "Good job! You met your goal!" << endl;
    }
    
// check if you excceded your goal
if (totalMiles > goal) {
 milesOverUnder = totalMiles - goal;
 cout << "Great job! You exceeded your goal by " << milesOverUnder << " miles!" << endl;
}

// check if you missed your goal
if (totalMiles < goal) {
 milesOverUnder = goal - totalMiles;
 cout << "Uh oh! You missed your goal by " << milesOverUnder << " miles!" << endl;
}

}

void getInput(int &goal) {
// Prompt user for goal
cout << "How many miles do you want to ride this week? ";
// Read goal input
goal = readInt();
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
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!



Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!




*/
