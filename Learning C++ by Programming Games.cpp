
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//Guess Number

int main()
{
	srand(time(NULL));
	int RandomNumber = rand() % 100 + 1;
	int guess;
	int count = 0;
	char restart = 'e';
	cout << " Welcome to Guess Number Game " << endl;
	cout << " Guess Number " << endl;
	do
	{
		
		cin >> guess;
		count++;
		if (guess > RandomNumber)
		{
			cout << " Too Hight " << endl;
		}

		else if (guess < RandomNumber)
		{
			cout << " Too Low " << endl;
		}

		else 
		{
			cout << " Thats Right " << endl;
			
			cout << " You made it in " << count << " Tries " << endl;
			break;
		}
		
		cout << " Do you Want To Repeat ? " << " Press 'e' " << endl;
		cin >> restart;
		
		if (restart == 'e')
		{
			cout << " Okay Lets Try Again " << endl;
			
			continue;
		}
		else
		{
			cout << " GoodBuy Then " << endl;
			break;
		}
		

	} while (guess != RandomNumber);

	

	return 0;

}