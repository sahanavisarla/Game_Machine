#include <iostream>
#include <string> 
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
  int option = 0;
  int pint;
  int height;
  int posint;
  srand(time(0));
  
  while (option != 5)
  { 
    cout << "\n\n---------- Welcome to the MATH CHALLENGE! Choose a number: ----------\n";
    cout << "1) Simple Counting\n2) Skip Counting\n3) Addition\n4) Multiplication\n5) Perfect Numbers\n6) Find the Average\n7) Triangle Math\n8) Quit the Game\n\n" << endl;
    cin >> option;
    cout << "\n";
    
    if (option == 1) // OPTION #1 -- SIMPLE COUNTING
    {
      int perfnum = 0;
      cout << "Enter any number BUT zero: ";
      cin >> posint;
      while (posint == 0)
      {
        cout << "Invalid. Please enter a different number: ";
        cin >> posint;
      }
      int e = posint;
      for (int n = 0; n <= e; n++)
      {
        cout << n << " ";
      } 
    }
    
    if (option == 2) // OPTION #2 -- SKIP COUNTING
    {
      int a, b, c;
      cout << "Please enter numbers that are NOT zero." << endl;
      cout << "Count from: ";
        cin >> a;
      cout << "Count to: ";
        cin >> b;
      cout << "Count by: ";
        cin >> c;
      cout << " " << endl;
        
      for(int n = a; n <= b;) 
      {
        cout << n << " ";
        n = n + c;
      }  
    }

    if (option == 3) // OPTION #3 -- ADDITION
    {
      cout << "Enter a number: ";
      int numberr;
      cin >> numberr;
      int summ;
      for (int re = 1; re <= numberr; re++)
      {
        cout << re << " ";
        summ = summ + re;
      }  
    } 
    
    if (option == 4) // OPTION #4 -- MULTIPLICATION
    {
      cout << "Choose a number: ";
      int nnumber;
      cin >> nnumber;
      int ssum = 0;

      for (int abc = 1; abc <= nnumber; abc++)
      {
        ssum = nnumber * abc;
        cout << nnumber << " x " << abc << " = " << ssum << endl;
      }  
    }  
    
    if (option == 5) // OPTION #5 -- PERFECT NUMBERS
    {
      int perfnum = 0;
      cout << "Enter a positive integer to see if it is perfect: ";
      cin >> posint;
      while (posint <= 0)
      {
        cout << "Invalid. Please enter a positive integer: ";
        cin >> posint;
      }
      for (int b = 1; b < posint; b++)
      {
        if (posint % b == 0)
        {
          perfnum = perfnum + b;
        }
      }
      if (posint == perfnum)
      {
        cout << "That number is perfect!";
      }
      else
      {
        cout << "Unfortunately that's not a perfect number...";
      }
    }
    
    if (option == 6) // OPTION #6 -- FIND THE AVERAGE
    {
      double answerone;
      double answertwo;
      double answerthree;
      
      cout << "Enter your first number? ";
        cin >> answerone;
      cout << "Enter your second number? ";
        cin >> answertwo;
      cout << "Enter your third number? ";
        cin >> answerthree;

      double answerfour = (answerone + answertwo + answerthree) / 3;

      cout << " " << endl;
      cout << answerone << " + " << answertwo << " + " << answerthree << " = " << answerfour;
    }

    if (option == 7) // OPTION #7 -- TRIANGLE MATH
    {
      int sideA, sideB;
      cout << "Side A of the triangle (height): ";
      cin >> sideA;
      cout << "Side B of the triangle (base): ";
      cin >> sideB;

      int area = (sideA * sideB) / 2;
      int square = (sideA * sideA) + (sideB * sideB);
      double sideC = sqrt(square);

      cout << "\n";
      cout << "The area of the triangle is " << area << endl;
      cout << "Side C of the triangle (hypotenuse) is: " << sideC << endl;
    }  
    
    if (option == 8) // OPTION #8 -- QUIT THE GAME
    {
      cout << "Bye!";
    }
  }
}  
