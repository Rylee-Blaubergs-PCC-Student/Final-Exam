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
int readMiles(int miles, int i, int totalMiles);
int readInt();
int calcTotal(int totalMiles, int miles);


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {
// Declare input values
int goal = 0, miles = 0;

// Declare output values
int totalMiles = 0, milesOverUnder = 0;

welcome();

getInput(goal);
if (goal <= 0) {
  cout << "No miles were tracked this week." << endl;
  goodBye();
  return 0;
} else if (goal > 0) {
    for (int i = 1; i <= 7; i++) {
   totalMiles = readMiles(miles, i, totalMiles);     
}
}

// check goal and show results
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

int readMiles(int miles, int i, int totalMiles) {
switch(i) {
   case 1:
   cout << "How many miles did you ride on Sunday? ";
   miles = readInt();
   while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Sunday? ";
       miles = readInt();
   }
    totalMiles = calcTotal(totalMiles, miles);
      break;
   case 2:
      cout << "How many miles did you ride on Monday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Monday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
      break;
   case 3:
      cout << "How many miles did you ride on Tuesday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Tuesday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
      break;
   case 4:
      cout << "How many miles did you ride on Wednesday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Wednesday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
      break;
   case 5:
      cout << "How many miles did you ride on Thursday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Thursday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
      break;
   case 6:
      cout << "How many miles did you ride on Friday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Friday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
      break;
   case 7:
      cout << "How many miles did you ride on Saturday? ";
      miles = readInt();
      while (miles < 0) {
       cout << "Miles must be 0 or greater!" << endl;
       cout << "How many miles did you ride on Saturday? ";
       miles = readInt();
   }
      totalMiles = calcTotal(totalMiles, miles);
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
if (totalMiles == goal && goal != 0) {
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

int calcTotal(int totalMiles, int miles) {
return totalMiles + miles;
}




// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Miles Tracker

Program Description: tracks miles ridden over a week and compares it to a user-defined goal.

Design:
A. INPUT
goal as an integer
miles as an integer for each day of the week (7 days)

B. OUTPUT
totalMiles as an integer
milesOverUnder as an integer

C. CALCULATIONS
totalMiles = sum of miles ridden each day
milesOverUnder = absolute difference between totalMiles and goal

D. LOGIC and ALGORITHMS
create all function prototypes
start main function
declare input values
declare output values
Function int main start
call welcome function
call getInput(goal) function
if goal <= 0
   output "No miles were tracked this week."
   call goodBye() function
   end program
else if goal > 0
   for i from 1 to 7
      call readMiles(miles, i, totalMiles) function
close for
close if goal
call results(totalMiles, goal, milesOverUnder) function
call goodBye() function
end program
end main function

create void welcome() function
   output welcome message
end function

create void goodBye() function
   output goodbye message
end function

create int readInt() function
   declare tempVar as integer
   read input into tempVar
   while input is invalid
      output "Invalid input! Please try again!!"
      clear input stream
      ignore rest of line
      read input into tempVar
   close while
   ignore rest of line
   return tempVar
end function

create int readMiles(int miles, int i, int totalMiles) function
   switch i
      case 1:
         prompt for Sunday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Sunday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 2:
         prompt for Monday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Monday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 3:
         prompt for Tuesday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Tuesday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 4:
         prompt for Wednesday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Wednesday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 5:
         prompt for Thursday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Thursday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 6:
         prompt for Friday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Friday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      case 7:
         prompt for Saturday miles
         read miles using readInt()
         while miles < 0
            output "Miles must be 0 or greater!"
            prompt for Saturday miles
            read miles using readInt()
         close while
         set totalMiles = calcTotal(totalMiles, miles)
         break
      default
         break  
   close switch
   return totalMiles
end function

create void results(int totalMiles, int goal, int milesOverUnder) function
   output totalMiles ridden this week
   if totalMiles == goal and goal != 0
      output "Good job! You met your goal!"
   close if
   if totalMiles > goal
      set milesOverUnder = totalMiles - goal
      output "Great job! You exceeded your goal by " + milesOverUnder + " miles!"
   close if
   if totalMiles < goal
      set milesOverUnder = goal - totalMiles
      output "Uh oh! You missed your goal by " + milesOverUnder + " miles!"
   close if
end function

create void getInput(int &goal) function
   prompt for weekly goal
   read goal using readInt()
end function

create int calcTotal(int totalMiles, int miles) function
   return totalMiles + miles
end function


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
