// prog3WhichLangMacbeth.cpp
//    Use letter frequency counts to determine what language text is in.
//
// Author: Deep Patel
// Date: Oct 18, 2018
// Class: CS 141, Fall 2018
// Language: C++
//
// Translations of Macbeth were created online using Google translate, starting with the
// English version at http://shakespeare.mit.edu/macbeth/full.html
// To trigger the translation option, I went to the Chrome browser / Settings / Language
// option and changed the default language, which triggered showing the translation option
// for the English Macbeth page when it was displayed.  The translated text was then
// copy/pasted into a text file and saved.  The texts are stored using the multi-byte
// UTF-8 format, explained at https://en.wikipedia.org/wiki/UTF-8, though here we are
// not attempting to count more than the first 128 alphabetical characters.
//
/* Results of running program are:

Program 3: Which Language

Letter Frequency Counts:
	   Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
A:   6018  9416  6544  5068  7541  8935  9939 10052
B:   1464   448  1081  2060  1746  1221  1173  1387
C:   2144   636  3028  3126  1014  3865  2855  3222
D:   3331  1013  2698  4592  2265  2945  3687  3815
E:   9270  7187 12782 14779  8280  9364 10551 10861
F:   1701   297  1101  1464   932  1099  1039   653
G:   1333   187   772  2503  2975  1423   983   936
H:   5244  2384  1004  4775  1687  1485  1413  1263
I:   4653  8022  5583  7062  2961  8128  4179  3964
J:     38  1331   538   148  1049     5   216   429
K:    691  3952    28  1080  3551    51    19    18
L:   3294  4648  4240  3089  4658  4814  2082  3985
M:   2481  3526  3269  2861  3812  2790  4415  3021
N:   4987  7958  5958  9026  4725  5966  4455  5704
O:   6054  4219  5315  2208  3529  8668  8898  7605
P:   1000  1331  2297   466   448  2060  1862  1842
Q:    121    78   907    84    77   548   954   883
R:   4518  1784  5986  5955  2802  5357  5328  5706
S:   4943  5425  6898  5852  4538  4863  6774  6468
T:   7055  7620  6025  5477  5632  5373  3729  3932
U:   2590  4226  5373  3327   963  3081  3840  3591
V:    657  1784  1566   661  1297  1287  1351   893
W:   1926   120    78  1797   138   141    68    61
X:    112    45   328    89    49    42   260    91
Y:   1637  1403   247   169  1998   216    65   891
Z:     15     3   343   939  2742   490   314   301

Letter frequency order:
	  Engl  Finn  Fren  Germ  Hung  Ital  Port  Span
		  E     A     E     E     E     E     E     E
		  T     I     S     N     A     A     A     A
		  O     N     A     I     T     O     O     O
		  A     T     T     R     N     I     S     S
		  H     E     R     S     L     N     R     R
		  N     S     N     T     S     T     N     N
		  S     L     I     A     M     R     M     L
		  I     U     U     H     K     S     I     I
		  R     O     O     D     O     L     U     T
		  D     K     L     U     G     C     T     D
		  L     M     M     C     I     U     D     U
		  U     H     C     L     R     D     C     C
		  M     R     D     M     Z     M     L     M
		  C     V     P     G     D     P     P     P
		  W     Y     V     O     Y     H     H     B
		  F     J     F     B     B     G     V     H
		  Y     P     B     W     H     V     B     G
		  B     D     H     F     V     B     F     V
		  G     C     Q     K     J     F     G     Y
		  P     B     G     Z     C     Q     Q     Q
		  K     F     J     V     U     Z     Z     F
		  V     G     Z     P     F     Y     X     J
		  Q     W     X     Y     P     W     J     Z
		  X     Q     Y     J     W     K     W     X
		  J     X     W     X     Q     X     Y     W
		  Z     Z     K     Q     X     J     K     K

Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): 
Ma per arrivare a un agreement bisogna essere in due. E dato che il governo intende resistere sui numeri della manovra, è necessario offrire garanzie all’Europa e ai mercati. Perciò sono stati stabiliti due capisaldi: uno tecnico, l’altro più politico. La riduzione strutturale del debito viene fissato come un «obiettivo strategico», non a caso sottolineato da Di Maio dopo il vertice. La linea dell’esecutivo è che per far ripartire l’Italia sia necessario «cambiare approccio» con una manovra espansiva «dopo anni di cure rigoriste senza risultati», ma s

A:51 B:5 C:20 D:15 E:55 F:4 G:6 H:2 I:54 J:0 K:0 L:22 M:10 N:29 O:39 P:13 Q:0 R:37 S:28 T:31 U:15 V:9 W:0 X:0 Y:0 Z:3 

Letter frequency order:
	  Engl  Finn  Fren  Germ  Hung  Ital  Port  Span  User
		  E     A     E     E     E     E     E     E     E
		  T     I     S     N     A     A     A     A     I
		  O     N     A     I     T     O     O     O     A
		  A     T     T     R     N     I     S     S     O
		  H     E     R     S     L     N     R     R     R
		  N     S     N     T     S     T     N     N     T
		  S     L     I     A     M     R     M     L     N
		  I     U     U     H     K     S     I     I     S
		  R     O     O     D     O     L     U     T     L
		  D     K     L     U     G     C     T     D     C
		  L     M     M     C     I     U     D     U     D
		  U     H     C     L     R     D     C     C     U
		  M     R     D     M     Z     M     L     M     P
		  C     V     P     G     D     P     P     P     M
		  W     Y     V     O     Y     H     H     B     V
		  F     J     F     B     B     G     V     H     G
		  Y     P     B     W     H     V     B     G     B
		  B     D     H     F     V     B     F     V     F
		  G     C     Q     K     J     F     G     Y     Z
		  P     B     G     Z     C     Q     Q     Q     H
		  K     F     J     V     U     Z     Z     F     J
		  V     G     Z     P     F     Y     X     J     K
		  Q     W     X     Y     P     W     J     Z     Q
		  X     Q     Y     J     W     K     W     X     W
		  J     X     W     X     Q     X     Y     W     X
		  Z     Z     K     Q     X     J     K     K     Y

		 60    78    16    50    94    10    18    13  <--- Difference (This line is not part of expected output, but is helpful!)

Language is Italian
 
 */

// Your code should go here
// ...
// 

#include <iostream>
#include <cctype>      // For the letter checking functions
#include <fstream>   // For file input
#include <iomanip>   //for setw func
#include <cstdlib>      // For exit()
using namespace std;

//declare global varibales
const int LIMIT  = 26;  //holds alphabets
const int LANGUAGES = 9;  //holds number of languages include user col.

//construct struct for difference and language predictor
struct language 
{
  string languages[LANGUAGES - 1] = {"English", "Finnish", "French", "German", "Hungarian", "Italian", "Portuguese", "Spanish"}; //store the languages
  int sum[LANGUAGES - 1]; //store the difference 
} display;


//display intro message and get userinput
int introMessage () 
{
  int input; 
  cout << "Program 3: Which Language.\n\n" 
       << "Select from the following stages of output to display:\n"
       << "   1. Letter frequency counts\n"
       << "   2. Letter frequency order\n"
       << "   3. Get user input and display frequency counts\n"
       << "   4. Get user input, display frequency counts, and display language\n"
       << "   0. Exit the program\n"
       << "Your choice -->";
  cin >> input;  //hold user input
  return input;  //return input to frqCts func
} //end introMessage


//show language header without user col
void headerWithoutUser () 
{
  cout << setw(9) << "Engl" << setw(6) << "Finn" << setw(6) << "Fren" << setw(6) << "Germ" << setw(6) << "Hung" << setw(6) << "Ital" << setw(6) << "Port" << setw(7) << "Span\n";
} //end headerWithoutUser


//display language header with user col
void headerWithUser ()
{
   cout << setw(9) << "Engl" << setw(6) << "Finn" << setw(6) << "Fren" << setw(6) << "Germ" << setw(6) << "Hung" << setw(6) << "Ital" << setw(6) << "Port" << setw(6) << "Span" << setw(7) << "User\n";
} //end headerWithUser


//collect frq cts after reading files
void frqCts (int frqCounts [LIMIT][LANGUAGES]) 
{
  string FileNames [LANGUAGES] = {"MacbethEnglish.txt", "MacbethFinnish.txt", "MacbethFrench.txt", "MacbethGerman.txt", "MacbethHungarian.txt", "MacbethItalian.txt", "MacbethPortuguese.txt", "MacbethSpanish.txt"};
  string fileName;
  char c;

  for (int count = 0; count < LANGUAGES - 1; count++)
  {
    //initialize frqCounts to 0
    for (int i = 0; i < LIMIT; i++) 
    {
      frqCounts [i][count] = 0;
    }
    
    //store filename with fileName array
    fileName = FileNames[count];

    ifstream inputFileStream; 
    inputFileStream.open(fileName.c_str());   // Convert C++ string to expected C-style string 
    if(!inputFileStream.is_open()) 
    {
   	  cout << "Could not find input file.  Exiting..." << endl;
   	  exit( -1);
    }
    
    //read files with while loop
    while( inputFileStream >> c) 
    {
      // convert alphabetic input characters to upper case
     if( isalpha(c)) 
     {
       c = toupper( c);
       frqCounts [c-'A'][count]++; // update letter count, using the character as the index
       // cout << c << " ";    // Takes too long to display when enabled
       //cin.ignore();
      }
    } //end-while loop

    inputFileStream.close();
  } //end 1st for-loop
    
  //display the languages header
  headerWithoutUser();

  //display frq counts
  for (int u = 0; u < LIMIT; u++)
  {
    cout << char (u + 65) << ": ";
    for (int y = 0; y < LANGUAGES - 1; y++)
    {
      cout << right << setw(6) << frqCounts [u][y];
    }
    cout << endl;
  } //end 2nd for-loop
} //end frqCts


//collect and display frq ord for each language
void frqOrder (int frqCounts [LIMIT][LANGUAGES], char lettersArray [LIMIT][LANGUAGES])
{ 
 // A function to implement bubble sort 
 int i, j, temp = 0; 
 char temp2;

 //sorting algorithm
 for (i = 0; i < LIMIT - 1; i++)       
 {   
   for (j = 0; j < LIMIT - i - 1; j++)  
   {
     for (int a = 0; a < LANGUAGES - 1; a++)
     {
       //compare frqCount values and swap 
       if (frqCounts [j][a] < frqCounts [j+1][a]) 
       {
         //swap values
         temp = frqCounts [j][a];
         frqCounts [j][a] = frqCounts [j + 1][a];
         frqCounts [j + 1][a] = temp;

         //swap letters accordingly
         temp2 = lettersArray [j][a];
         lettersArray [j][a] = lettersArray [j + 1][a];
         lettersArray [j + 1][a] = temp2;
       } 
     }
   }
 }
   
 cout << "\nLetter frequency order:\n";
 headerWithoutUser();
 
 //display sorted lettersArray 
 for (int u = 0; u < LIMIT; u++)
 {
  cout << "   ";
  for (int g = 0; g < LANGUAGES - 1; g++)
  {
    cout << right << setw(6) << lettersArray [u] [g];
  }
  cout << endl;
 }
} //end frqOrder


//get userinput and display frq ord
void inputAndFrqOrd (int frqCounts [LIMIT][LANGUAGES], char lettersArray [LIMIT][LANGUAGES]) 
{ 
  int temp = 0; 
  char temp2;
  char userInput;        //store userinput for analyzing
  int tempArray[LIMIT];  //stores values for temp
  cout << "Copy and paste a paragraph of text to be analyzed, followed by ^z (PC) or ^d (Mac): ";

  //initialize tempArray to 0
  for(int i = 0; i < LIMIT; i++)
  {
    tempArray[i] = 0;
  }
  
  while((cin >> userInput))
  {
    // convert alphabetic input characters to upper case
    if( isalpha(userInput)) 
    {
      userInput = toupper( userInput);
      tempArray[userInput -'A']++; // update letter count, using the character as the index
    }
  } //end-while loop

  //copy tempArray to frqCounts 
  for (int i = 0; i < LIMIT; i++)
  {
    frqCounts [i][8] = tempArray [i];
    cout << char (i + 'A') << ": " << frqCounts [i][8] << " ";
  }
  cout << endl;

  //bubble sort for last col
  for (int i = 0; i < LIMIT - 1; i++)       
  {   
    for (int j = 0; j < LIMIT - i - 1; j++)  
    {
      //compare frqCount values and swap 
      if (frqCounts [j][8] < frqCounts [j+1][8]) 
      {
        //swap values
        temp = frqCounts [j][8];
        frqCounts [j][8] = frqCounts [j + 1][8];
        frqCounts [j + 1][8] = temp;
        
        //swap letters accordingly
        temp2 = lettersArray [j][8];
        lettersArray [j][8] = lettersArray [j + 1][8];
        lettersArray [j + 1][8] = temp2;
      } 
    }
  }
  
  cout << "\nLetter frequency order:\n";
  headerWithUser();
  
  //display sorted letters for user col.
  for (int u = 0; u < LIMIT; u++)
  {
    cout << "   ";
    for (int g = 0; g < LANGUAGES; g++)
    {
      cout << right << setw(6) << lettersArray [u] [g];
    }
    cout << endl;
  }
} //end inputAndFrqOrd


//predict language through differences
void langPredictor (int frqCounts [LIMIT][LANGUAGES], char lettersArray [LIMIT][LANGUAGES])
{
  int sum = 0, lowest = 100;   //initialize variables

  for (int u = 0; u < LANGUAGES - 1; u++)
  {
    for (int i = 0; i < LIMIT; i++)
    {
      for (int g = 0; g < LIMIT; g++)
      {
        if (lettersArray [i][8] == lettersArray [g][u])
        {
          if (abs(i - g) >= 5)
          {
            sum += abs(i - g);
          } 
        } 
      }
    } //end of inner 4 loop

    display.sum[u] = sum;  //store sum to sum array in struct
    sum = 0;  //initialize sum to 0
    
    //assign lowest from the sum array
    if (display.sum[u] < lowest)
    {
      lowest = display.sum[u];
    }
  } //end of outer for-loop

  //find language using index of lowest from sum array
  for (int i = 0; i < LANGUAGES - 1; i++)
  {
    if (display.sum[i] == lowest)
    {
      cout << "\nLanguage is " << display.languages[i] << endl;
    }
  }
} //end lan predictor


int main () 
{
  int frqCounts [LIMIT][LANGUAGES];   //store frq counts 
  char lettersArray [LIMIT][LANGUAGES];   //store frq orders 
  int userResponse;  

  userResponse = introMessage();  //userresponse for switch cases
  cout << "\n\nLetter Frequency Counts:\n";
 
  //initialize lettersArray
  for (int i = 0; i < LANGUAGES; i++)
  {
    for (int g = 0; g < LIMIT; g++)
    {
      lettersArray [g][i] = char (g + 65);
    }
  }  //end for-loop initialization

  //swtich cases
  switch(userResponse)
  {
    case 1: frqCts (frqCounts);        //display frq cts only
            break;

    case 2: frqCts (frqCounts);
            frqOrder (frqCounts, lettersArray);    //display frq cts and order 
            break;

    case 3: frqCts (frqCounts);
            frqOrder (frqCounts, lettersArray);
            inputAndFrqOrd (frqCounts, lettersArray);   //display frq cts, order, and get userinput
            break;

    case 4: frqCts (frqCounts);
            frqOrder (frqCounts, lettersArray);
            inputAndFrqOrd (frqCounts, lettersArray);
            langPredictor (frqCounts, lettersArray);     //display frq cts, order, get userinput, and predict
            break;
  }  //end swtich
  return 0;
} //end main

//***Park: Great works