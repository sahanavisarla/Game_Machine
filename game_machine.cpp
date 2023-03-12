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
  int ticketnum;
  srand(time(0));
  
  while (option != 5)
  { 
    cout << "\n\n---------- Welcome to the ULTIMATE GAME MACHINE! Choose a number: ----------\n";
    cout << "1) Rocket Launch\n2) Weight and the Solar System\n3) All About Alaska\n4) Lottery Ticket \n5) Draw an Animal \n6) Draw a Traingle \n7) Quit\n" << endl;
    cin >> option;
    cout << "\n";
  
    if (option == 1) // OPTION #1 -- ROCKET LAUNCH
    {
      cout << "Please enter a positive integer: ";
      cin >> pint;
      while (pint <= 0)
      {
        cout << "Invalid. Please enter a positive integer: ";
        cin >> pint; 
      }
        for (int a = pint; a >= 1; a--) 
      	{
      		cout << a << "...";
      	}
        cout << "...Kaboom!" << endl;
    }
  
    if (option == 2) // OPTION #2 -- YOUR WEIGHT AND THE SOLAR SYSTEM
    {
      double weight;
      double planet;
        
      cout << "Please enter your weight on Earth: ";
        cin >> weight;
      cout << "\nChose one planet from the following options:";
      cout << "    1. Venus   2. Mars    3. Jupiter";
      cout << "    4. Saturn  5. Uranus  6. Neptune\n\n";
      cout << "Which planet are you visiting? (Enter the number) ";
        cin >> planet; 
            
      if(planet == 1) {
        weight = weight * 0.78;
        cout << "Your weight will be " << weight << " on Venus";
      } else if (planet == 2) {
        weight = weight * 0.39;
        cout << "Your weight will be " << weight << " on Mars";
      } else if (planet == 3) {
        weight = weight * 2.65;
        cout << "Your weight will be " << weight << " on Jupiter";
      } else if (planet == 4) {
        weight = weight * 1.17;
        cout << "Your weight will be " << weight << " on Saturn";
      } else if (planet == 5) {
        weight = weight * 1.05;
        cout << "Your weight will be " << weight << " on Uranus";
      } else if (planet == 6) {
        weight = weight * 1.23;
        cout << "Your weight will be " << weight << " on Neptune";
      } else {
        cout << "Invalid Response.";
      }
      
    }
    
    if (option == 3) // OPTION #3 -- ALASKA QUIZ
    {
      string quiz;
      int ans1, ans2, ans3, n;
        
        cout << "Are you ready to take a quiz? (Enter \"Yes\" or \"No\"";
          cin >> quiz;
        cout << "Remember to only enter the numbers of the answers. Good Luck!\n";
        
        cout << "Q1) What is the capital of Alaska?";
        cout << "\t 1) Melbourne";
        cout << "\t 2) Anchorage";
        cout << "\t 3) Juneau";
        cout << "My Answer: ";
          cin >> ans1;
        
        if (ans1 == 1) {
            cout << "Nice try, but you're wrong.\n";
        } else if (ans1 == 2) {
            cout << "Nice try, but you're wrong.\n";
        } else if (ans1 == 3) {
            cout << "Yes, you're right!\n";
        } else {
            cout << "That's not even an answer!\n";
        }
        
        cout << "Q2) Can you store the value \"cat\" in a variable of type int?";
        cout << "\t 1) Yes";
        cout << "\t 2) No";
        cout << "My Answer: ";
          cin >> ans2;
        
        if (ans2 == 1) {
          cout << "Nice try, but you're wrong.";
        } else if (ans2 == 2) {
            cout << "Good Job, you're right!";
        } else {
            cout << "That wasn't one of the choices.";
        }
        
        cout << "Q3) What is the result of 9 + 6 / 3?";
        cout << "\t 1) 5";
        cout << "\t 2) 11";
        cout << "\t 3) 15/3";
        cout << "My Answer: ";
          cin >> ans3;
        
        if (ans3 == 1) {
            cout << "Nice try, but you're wrong.";
        } else if (ans3 == 2) {
            cout << "Good Job, you're right!";
        } else if (ans3 == 3) {
            cout << "Nope, that's wrong.";
        } else {
            cout << "That's not an answer!";
        }
        
        n = 0;
        
        if (ans1 == 1 && ans2 == 1 && ans3 == 1) {
            n = 0; 
        } else if (ans1 == 1 && ans2 == 1 && ans3 == 2) {
            n = 1;
        } else if (ans1 == 1 && ans2 == 1 && ans3 == 3) {
            n = 0;
        } else if (ans1 == 1 && ans2 == 2 && ans3 == 1) {
            n = 1;
        } else if (ans1 == 1 && ans2 == 2 && ans3 == 2) {
            n = 2;
        } else if (ans1 == 1 && ans2 == 2 && ans3 == 3) {
            n = 1;
        } else if (ans1 == 2 && ans2 == 1 && ans3 == 1) {
            n = 0;
        } else if (ans1 == 2 && ans2 == 1 && ans3 == 2) {
            n = 1;
        } else if (ans1 == 2 && ans2 == 1 && ans3 == 3) {
            n = 0;
        } else if (ans1 == 2 && ans2 == 2 && ans3 == 1) {
            n = 1;
        } else if (ans1 == 2 && ans2 == 2 && ans3 == 2) {
            n = 2;
        } else if (ans1 == 2 && ans2 == 2 && ans3 == 3) {
            n = 1;
        } else if (ans1 == 3 && ans2 == 1 && ans3 == 1) {
            n = 1;
        } else if (ans1 == 3 && ans2 == 1 && ans3 == 2) {
            n = 2;
        } else if (ans1 == 3 && ans2 == 1 && ans3 == 3) {
            n = 1;
        } else if (ans1 == 3 && ans2 == 2 && ans3 == 1) {
            n = 2;
        } else if (ans1 == 3 && ans2 == 2 && ans3 == 2) {
            n = 3;
        } else if (ans1 == 3 && ans2 == 2 && ans3 == 3) {
            n = 2;
        } else {
            cout << "Since you didn't take the quiz seriously you will get no credit.";
        }
        
        cout << "Overall, you got " << n << " out of 3 correct.";
        cout << "Thanks for playing!";
    }

    if (option == 4) // OPTION #4 -- LOTTERY TICKET
    {
          cout << "How many lottery tickets would you like to buy today? ";
          cin >> ticketnum;
          while (ticketnum <= 0)
          {
            cout << "Invalid. Please enter a positive number: ";
            cin >> ticketnum;
          }
        
          {
            for (int c = 1; c <= ticketnum; c++)
            {
              cout << "Ticket #" << c << " : ";
              for (int d = 1; d <= 6; d++)
              {
                int ticketcode = rand() % 50 + 1;  
                cout << ticketcode << " ";
              }
              cout << endl;
            }
          }
        }
  
    if (option == 5) // OPTION #5 -- DRAW AN ANIMAL
    {
      string answer;
      int animal;
      
      cout << "Pick an Animal you want to draw (enter a number):\n 1) Fish\n2) Cat";
      cin >> animal;
    
      if (animal == 1)
      {
        cout << "\t\t, --, _\n__     _\\.-- - '-.\n\\  '.-\"\      // o\\\n/__.'-._     \\\\\  /\n     `\" - - (/ \"`\n";
        cout << " /\\____/\\ \n | o  o | \n \\ =\"=  /";
        cout << "  /\\/\\/\\/\\  \n  |       |\n {| \"   \" |} \n  |   ^   | \n  |\\_____/| \n  |       | \n  |       | \n  \\-------/ ";
      }
      if (animal == 2)
      {
        cout << "     /\\_/\\";
        cout << "   =(  o.o  )=";
        cout << "     )  ^  (";
        cout << "    /   |  \\";
        cout << "   /    |   \\";
        cout << "  /     |    \\";
        cout << "     /     \\";
        cout << "    (       )";
        cout << "     \\    /";
        cout << "      `---'";
      }  
      if (animal == 3)
      {  
        cout << "";
        cout << "";
        cout << "";
        cout << "";
        cout << "";
        cout << "";
      }
      if (animal == 4)
      {  
        cout << "";
        cout << "";
        cout << "";
        cout << "";
        cout << "";
        cout << "";
      }
    }  

    if (option == 6) // OPTION #6 -- DRAW A TRIANGLE
    {
      cout << "Enter the height of an isosceles triangle. The height must be an integer greater than 1: ";
    	cin >> height;
      while (height <= 1)
      {
        cout << "Invalid. Please enter a positive integer: ";
        cin >> height;
      }
      if (height == 2)
      {
        for (int m = 1; m <= height; m++)
      	{
      		for (int n = 1; n <= m; n++) 
      		{
      			cout << "* ";
      		}
          cout << endl;
      	}
      }
      while (height > 2)
      {
    	  for (int i = 1; i <= height; i++)
      	{
      		for (int j = 1; j <= i; j++) 
      		{
      			cout << "* ";
      		}
          cout << endl;
      	}
        for (int k = 1; k <= height; height--)
      	{
          for (int l = 1; l < height; l++)
          {
            cout << "* ";
          }
          cout << endl;
      	}
      }
    }
  
    if (option == 7) // OPTION #7 -- QUIT THE GAME
    {
      cout << "Bye!";
    }
  }  
}
