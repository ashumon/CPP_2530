//Create a program that given a large number will convert it to time in hours, minutes, and seconds
// 0.) declare data type before main.
// 1.) Print out to screen "welcome to my first program" & "COnvert a large number of seconds into hours, minutes, and seconds"
// 2.) Print out the prompt for user input
// 3.) Store user input as variable
// 4.) calculate the hours
// 5.) calculate the minutes
// 6.) calculate remainder in seconds
// 7.) print hours, minutes, seconds on separate lines to the screen



using namespace std;

#include <iostream>


int main()
{
    int numSeconds;
    int hours;
    int minutes;
    int seconds;

    cout << "**********************************************************************" << endl;
    cout << "****************** Welcome to my first program ***********************" << endl;
    cout << "Convert a large number of seconds into hours, minutes, and seconds.   " << endl;
    cout << "**********************************************************************" << endl;

    //write to the screen and store user input
    cout << "Please enter a large number of seconds: " << endl;
    cin >> numSeconds;

    // calculate hours
    hours = numSeconds / 3600;

    //calculate remainder using modulus f(x)
    numSeconds = numSeconds % 3600;

    //calculate minutes using remainder
    minutes = numSeconds / 60;

    //calculate remainder using modulus f(x)
    numSeconds = numSeconds % 60;

    //remainder is equal to # of seconds
    seconds = numSeconds;


    cout << "The number of hours in the number is: " << hours << endl;
    cout << "The number of minutes in the number is: " << minutes << endl;
    cout << "The number of seconds in the number is " << seconds << endl;

    return 0;



}


