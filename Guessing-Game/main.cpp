//============================================================================
// Name        : Guessing Game
// Author      : Keshav
// Version     : 1.0
// Copyright   : Its' opensource free to use
// Description : Guessing game in C++, predict a number,
//               if you arelucky, you'll win.
//       Ansi-style
//============================================================================

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	srand(unsigned(time(0)));
	int limit = 6;
	int r = rand()%21;

	int c;
	do{
		limit--;
		cout<<"Guess any number (between 0 to 20): "<<endl;
		cin>>c;
		if(c > 20 or c < 0){
			cout<<"Number out of range - chances remaining : "<<limit<<endl;
			continue;
		}
		if(r == c){
			cout<<"You won! cleared it in "<<6-limit<<" time(s)"<<endl;
			break;
		}
		if(c < r)
			cout<<"Number is too less - chances remaining : "<<limit<<endl;
		else if(c > r)
			cout<<"Number is too big - chances remaining : "<<limit<<endl;
		if(limit == 0)
		{
			cout<<"Limit is exhausted - try next time!"<<endl;
			cout<<"Number was "<<r<<endl;
			break;
		}
	}while(c != r);
	system("pause");
	return 0;
}



























