#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int randomNumber;
    int guess;
    int chances = 0;
    srand(time(0)); 
    randomNumber = rand() % 100 + 1; 
    cout << "	Hello Welcome to Guess the Number Game"<<endl;

    do
    {
    cout << "Enter your guess between 1 and 100: "<<endl;
   cin >> guess;
   chances++;
   
   if (guess > randomNumber){
   	
    cout << "The "<<guess<<" is Too high!"<<endl;
    }
    
    else if (guess < randomNumber){
    	
    cout << "The "<<guess<<" is Too low!\n\n";
}
    else{
    	
   cout << "WELL DONE !!! You got the right guess "<<guess <<"in "<< chances << " tries!\n";
    
	}
	
    } 
    
    while (guess != randomNumber);

	return 0;
}