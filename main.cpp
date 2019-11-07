// The 3 types of loops in programming
//KellieHenderson, Dr_T, 8-28-2019, COSC 1436-57005 

#include <iostream>
using namespace std;
int main()
{
cout << "The while loop \n";
int n = 0;
cout << "Please enter a start number: ";
cin >> n ;
while (n > 0)
  {
    cout << n << "," ;
    --n; // subtract 1 from n upon each loop.

  }
 cout << "\nFIRE!" << endl;

 cout<< "\nThe do-while loop: " << endl;

  unsigned long num = 1;
do
  {
    cout << "Please enter a start number (0 to exit.)\n " << endl;
    cin >> num;
    
  }
  while (num != 0);
    cout << "Hasta La Vista Baby!\n " << endl;

    cout << "\n The for loop: " << endl;
    
    for(int i = 10; i > 0; i--)
    {
      cout << i << " , ";
    }
  /* expant the program. for loop user determines the start num. cout from start n ... 0. show "Happy New Year!" */
  int s = 0; 
  cout << "\nPlease enter a starting point: ";
  cin >> s;
for(int j = s; j > 0; j--)
    {
      cout << j << " \n "; // one line between each
    }
    cout << "Happy New Year! " << endl;

    /* write a for loop to cout from 1...n. append "green to all even numbers. Append "tea" to all odd numbers. Allow user to set n "end point" output each statement 1 per line when loop and conditions (if)work together.
    even (i % 2 ) == 0
    odd (i % 2) == 1 */ 

   int e = 0;
   cout << "\nPlease enter an end point: " ;
   cin >> e;
   for(int i = 1; i <= e; i++)
   {
    if( (i%2) == 0) // even number
     //controlling output
    {
     cout << i << "green" << endl;
    }
    else if ( (1%2) == 1)// odd number
    {
     cout << i << "tea" << endl;
    }
    else // default clause.
    {
      cout << "\n Something went wrong."  << endl;
    }



   }

  return 0;
}