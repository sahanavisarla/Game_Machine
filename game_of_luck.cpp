#include <iostream>
#include <string> 
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
  int option = 0;
  // srand(time(0));
  
  while (option != 5)
  { 
    cout << "\n\n\n---------- Welcome to the GAME OF LUCK! ----------\n";
    cout << "1) Predict Your Future\n2) Magic 8-Ball Fortune Teller\n3) Guess the Number\n4) Game of Cat(astrophes)\n5) Celebrity Cheif Showdown\n6) Disaster Island\n7) Break into the Cookie Jar\n8) Quit the Game\n\n" << endl;
    cout << "Choose a number: ";
    cin >> option;
    cout << "\n";
    
    if (option == 1) // OPTION #1 -- PREDICT YOUR FUTURE
    {
      int r = rand() % 15 + 1;
      string a = "Don't hold onto things that require a tight grip.";
      string b = "Be grateful for what you have and you will recieve more in turn.";
      string c = "Good things come when you least expect them.";
      string d = "A dubious friend may be an enemy in camouflage.";
      string e = "He who throws dirt is losing ground.";
      string f = "Salt and sugar looks the same...be careful who you trust.";
      string g = "Tomorrow will be the best day of your life.";
      string h = "Don't let yesterday tale up too much of today";
      string i = "All we have to decide is what to do with the time that is given to us.";
      string j = "One bad chapter doesn't mean your story is over.";
      string k = "It's never to late to try";
      string l = "Turn your wounds into wisdom";
      string m = "The road to success is always under construction";
      string n = "Don't look for happiness...create it instead";
      string o = "Your friend has been wanting to tell you something";
        
      if (r == 1) 
        cout << "Fourtune cookie says: " + a;
      else if (r == 2) 
        cout << "Fourtune cookie says: " + b;
      else if (r == 3) 
        cout << "Fourtune cookie says: " + c;
      else if (r == 4) 
        cout << "Fourtune cookie says: " + d;
      else if (r == 5) 
        cout << "Fourtune cookie says: " + e;
      else if (r == 6) 
        cout << "Fourtune cookie says: " + f;
      else if (r == 7) 
        cout << "Fourtune cookie says: " + g;
      else if (r == 8) 
        cout << "Fourtune cookie says: " + h;
      else if (r == 9) 
        cout << "Fourtune cookie says: " + i;
      else if (r == 10) 
        cout << "Fourtune cookie says: " + j;
      else if (r == 11) 
        cout << "Fourtune cookie says: " + k;
      else if (r == 12) 
        cout << "Fourtune cookie says: " + l;
      else if (r == 13) 
        cout << "Fourtune cookie says: " + m;
      else if (r == 14) 
        cout << "Fourtune cookie says: " + n;
      else if (r == 15) 
        cout << "Fourtune cookie says: " + o;
    }
    
    if (option == 2) // OPTION #2 -- MAGIC 8 BALL
    {
      string response, sentence;
      int choice = rand() % 20 + 1;
      cout << "Enter any question you want to ask and the magic 8 ball will respond: " << endl;
        getline(cin, sentence);
      cin.ignore(100, '\n');
      
      if (choice == 1) 
          response = "It is certain";
      else if (choice == 2)
          response = "It is decidedly so";
      else if (choice == 3)
          response = "Without a doubt";
      else if (choice == 4)
          response = "Yes - definitely";
      else if (choice == 5)
          response = "You may rely on it";
      else if (choice == 6)
          response = "As I see it, yes";
      else if (choice == 7)
          response = "Most likely";
      else if (choice == 8)
          response = "Outlook good";
      else if (choice == 9)
          response = "Signs point to yes";
      else if (choice == 10)
          response = "Yes";
      else if (choice == 11)
          response = "Most probably";
      else if (choice == 12)
          response = "Ask again later";
      else if (choice == 13)
          response = "Better not tell you now";
      else if (choice == 14)
          response = "Cannot predict now";
      else if (choice == 15)
          response = "Concentrate and ask again";
      else if (choice == 16)
          response = "Don't count on it";
      else if (choice == 17)
          response = "My reply is no";
      else if (choice == 18)
          response = "My sources say no";
      else if (choice == 19)
          response = "Outlook not so good";
      else if (choice == 20)
          response = "Very doubtful";
      else
          response = "8-BALL ERROR!";
      
      cout << "Magic 8-Ball says: " << response; 
    } 

    if (option == 3) // OPTION #3 -- GUESS THE NUMBER
    {
      int q = rand() % 10 + 1;
      int guess;
      cout << "I'm thinking of a number from 1 to 10." << endl;
      cout << "Enter your guess: ";
        cin >> guess;

      if (guess == q)
        cout << "That's right! The secret number was " << q << ".";
      else
        cout << "Sorry, but I was really thinking of " << q << ".";
    }
    
    if (option == 4) // OPTION #4 -- GAME OF CAT(ASTROPHES)
    {
      int people = rand() % 36 + 1;
      int cats = rand() % 36 + 1;
      int dogs = rand() % 36 + 1;
      int randomindex = rand() % 39;
      string help;
      string places[] = {"Argentina", "Australia", "Bahamas", "Azerbaijan", "Belgium", "Brazil", "China", "Denmark", "Ethiopia", "France", "Germany", "Ghana", "Greece", "Hungary", "Iceland", "India", "Indonesia", "Israel", "Italy", "Jamaica", "Japan", "Kenya", "Laos", "Malaysia", "Mexico", "Morocco", "South Korea", "New Zealand", "Qatar", "Romania", "Russia", "Philippines", "Saudi Arabia", "South Africa", "Switzerland", "Thailand", "Turkey", "Ukraine", "Vietnam", "Zambia"};
      string randomplace = places[randomindex];
      
      cout << "The evil weatherman has been up to no good.\nHe just announced that he will make it rain cats and dogs this week  " << randomplace << " !! \nWe need your help to help people evacuate in time. \n\nDo you think we will survive? (enter \"Yes\" or \"No\"). ";
        getline(cin, help);
        cin.ignore(100, '\n');
      cout << "" << endl;

      if (people < dogs && people < cats) 
        cout << "Everyone needs to take shelter...NOW!" << endl;
      if (people > dogs && people > cats) 
        cout << "There's a low chance of cats and dogs for the next few days! We might survive!" << endl;
      if (dogs > cats && people > cats) 
        cout << "Not many cats! The world is saved!" << endl;
      if (dogs < cats && people < cats)
        cout << "Too many cats! The world is doomed!" << endl;
      if (dogs > cats && people < dogs && cats > people )
        cout << "The world is drooled on by dogs!" << endl;
      if (dogs > cats && people < dogs) 
        cout << "Oh no! Dogs will rule the world because there's a dog blizard in three days!!" << endl;
      if (cats > dogs && people < cats && dogs > people) 
        cout << "There will be a cat(ornado) in five hours!" << endl;
    }
    
    if (option == 5) // OPTION #5 -- CELEBRITY CHEIF SHOWDOWN
    {
      string first, second;
      srand(time(0));
      int coin = rand() % 2 + 1;
      int star = rand() % 5 + 1;
      int star2 = rand() % 5 + 1;
    
      // input
      cout << "Welcome to Celebrity Cheif Showdown!\n\n";
      cout << "Who is the first celebrity in our showndown? ";
        cin >> first;
        //getline(cin, first);
        //cin.ignore(100, '\n');
      cout << "Who is the second celebrity in our showndown? ";
        cin >> second;
        //getline(cin, second);
        //cin.ignore(100, '\n');
      cout << "\nI'm going to flip a coin. If it's heads, the celebrities will compete in alphabetical order.";
      cout << "\nIf it's tails, the celebrities will compete in reverse alphabetical order.\n\n";

      // flips coin
      switch(coin)
      {
        case 1:
          cout << "Heads!\n";
          break;
        case 2:
          cout << "Tails!\n";
          break;
      }

      // outcome #1
      if (coin == 1 && first < second || coin == 2 && first > second)
      {
        cout << first << " goes first!" << endl << "\n";     // first person goes first
        cout << first << " will be making a Cinnamon Swirl Cheescake.\n";
        cout << "The judges have given " << first << " " << star << (star==1 ? " star." : " stars.") << endl;
          switch(star)
          {
            case 1: cout << "The judges say that the dish was very bad.\n\n"; break;        
            case 2: cout << "The judges say that the dish was bad.\n\n"; break;
            case 3: cout << "The judges say the dish was nothing new.\n\n"; break;
            case 4: cout << "The judges say the dish was good.\n\n"; break;
            case 5: cout << "The judges say that the dish was the best thing they've ever had.\n\n"; break;
          }
        cout << second << " will be making a Triple Chocolate Cheescake.\n";     // second person goes first
        cout << "The judges have given " << second << " " << star2 << (star2==1 ? " star." : " stars.") << endl;
          switch(star2)
          {
            case 1: cout << "The judges say that the dish was very bad.\n\n"; break;
            case 2: cout << "The judges say that the dish was bad.\n\n"; break;
            case 3: cout << "The judges say the dish was nothing new.\n\n"; break;
            case 4: cout << "The judges say the dish was good.\n\n"; break;
            case 5: cout << "The judges say that the dish was the best thing they've ever had.\n\n"; break;
          }
        if (star > star2 )      // chief ranking
          cout << "Congratulations, " << first << "! You are the better chief.";
        if (star < star2)
          cout << "Congratulations, " << second << "! You are the better chief.";
        if (star == star2)
          cout << "Nobody wins because you are both tied.";
        }

    // outcome #2
      else if (coin == 1 && second < first || coin == 2 && second > first)
      {
        cout << second << " goes first!" << endl << "\n";     // second person goes first
        cout << second << " will be making a Triple Chocolate Cheescake.\n";
        cout << "The judges have given " << second << " " << star << (star==1 ? " star." : " stars.") << endl;
          switch(star)
          {
            case 1: cout << "The judges say that the dish was very bad.\n\n"; break;
            case 2: cout << "The judges say that the dish was bad.\n\n"; break;
            case 3: cout << "The judges say the dish was nothing new.\n\n"; break;
            case 4: cout << "The judges say the dish was good.\n\n"; break;
            case 5: cout << "The judges say that the dish was the best thing they've ever had.\n\n"; break;
          }
        cout << first << " will be making a Cinnamon Swirl Cheescake.\n";     // first person goes last
        cout << "The judges have given " << first << " " << star2 << (star2==1 ? " star." : " stars.") << endl;
          switch(star2)
          {
            case 1: cout << "The judges say that the dish was very bad.\n\n"; break;
            case 2: cout << "The judges say that the dish was bad.\n\n"; break;
            case 3: cout << "The judges say the dish was nothing new\n\n"; break;
            case 4: cout << "The judges say the dish was good.\n\n"; break;
            case 5: cout << "The judges say that the dish was the best thing they've ever had.\n\n"; break;
          }
        if (star > star2 )     // chief ranking
          cout << "Congratulations, " << second << "! You are the better chief.";
        if (star < star2)
          cout << "Congratulations, " << first << "! You are the better chief.";
        if (star == star2)
          cout << "Nobody wins because you are both tied.";
      }
    }
    
    if (option == 6) // OPTION #6 -- DISASTER ISLAND
    {  
        // ----- PART 1 -----
        // constant variables
        const int year = 2000; 
        const int hurricane = 3;
        const int earthquake = 5;
        const int tornado = 2;
        const int pandemic = 20;
      
        // user year input
        cout << "What's your name? ";
        string namee;
        cin >> namee;
        cout << "What year is it? ";
        int useryear;
        cin >> useryear;
      
        // natural disaster calculations 
        int difyear = useryear - year;
        int hurcount = difyear / hurricane;
        int nexthur = useryear - (difyear % hurcount) + hurricane;
        int earcount = difyear / earthquake;
        int nextear = useryear - (difyear % earcount) + earthquake;
        int torcount = difyear / tornado;
        int nexttor = useryear - (difyear % torcount) + tornado;
        int pancount = difyear / pandemic;
        int nextpan = useryear - (difyear % pandemic) + pandemic;
      
        // printing calculations to the console
        cout << "\nPoor " << namee << " moved to Disaster Island " <<difyear << " years ago to start farming potatoes, and since then...\n\n"; 
        cout << namee << " has been through " << hurcount << " hurricanes(s). The next huricane will be in " << nexthur << ".\n\n";
        cout << namee << " has been through " << earcount << " earthquakes(s). The next earthquake will be in " << nextear << ".\n\n";
        cout << namee << " has been through " << torcount << " tornado(s). The next tornado will be in " << nexttor << ".\n\n";
        cout << namee << " has been through " << pancount << " pandemic(s). The next pandemic will be in " << nextpan << ".\n\n\n\n";
      
        
        // ----- PART 2 -----
        // constant variables
        const int crate = 50; 
        const int sack = 20;
        const int basket = 6;
        
        // user potato input
        cout << "Finally! Some good luck for " << namee << "! A tribe of native villagers wishes to buy many potatoes from " << namee << "\n\n";
        cout << "How many potatoes do the villagers want? ";
        int potato;
        cin >> potato;
      
        // potato calculations
        int cratenum = potato / crate;
        int crateremains = potato % crate;
        int sacknum = crateremains / sack;
        int sackremains = crateremains % sack;
        int basketnum = sackremains / basket;
        int basketremains = sackremains % basket;
        int donkey = potato % crate % sack % basket;
      
        // printing calculations to console
        cout << "\nThe villagers will need " << cratenum << " crate(s), " << sacknum << " sack(s), " << basketnum << " basket(s), " << 
        donkey << " single potato(es) carried by his pet donkey, Gilbert." ;
      }
    
    if (option == 7) // OPTION #7 -- BREAK INTO THE COOKIE JAR
    {
  int number, odigit, hdigit;
  char letter;
  double decimal, hypo;
  const int CODE1 = 10;
  const int CODE2 = 20;
  const char CODECHAR = 'C';
  const double CODE3 = 2.5;
  
  cout << "Do you want a cookie? First you will have to unlock the three-part locking system on my cookie jar.\n\n";
  cout << "Lock #1 - Enter a positive three digit number: ";
    cin >> number;
    cin.ignore(100, '\n');
  
  odigit = number % 10;
  hdigit = (number - (number % 100)) / 100;
  
  if (CODE1 == odigit + hdigit)
  {
    cout << "You have opened the first lock!\n\n";
    cout << "Lock #2 - Enter a character: ";
      cin >> letter;
      int getchar(letter); 
    
    if ((int) CODECHAR + CODE2 >= letter && int(CODECHAR) - CODE2 <= letter)
    {
      cout << "You have opened the second lock!\n\n";
      cout << "Lock #3 - Enter a positive double value: ";
        cin >> decimal;
        cin.ignore(100, '\n');
        hypo = sqrt(2 * pow(decimal, 2));
      
      if (pow(CODE3, 3) >= hypo)
      {
        cout << "You have opened the third lock!\n\n";
        cout << "Congratulations! You have opened the cookie jar!";
      }
      else
        cout << "Go steal someone else's cookies!";
    }
    else
      cout << "Go steal someone else's cookies!";
  }
  else
    cout << "Go steal someone else's cookies!";
    }  
    
    if (option == 8) // OPTION #8 -- QUIT THE GAME
    {
      cout << "Bye!";
    }
  }
}
