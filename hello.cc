#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	for(int i=0; i<5;i++)
	{
		float r = ((float) rand() / RAND_MAX);
		float test = r * (4 - -4) + -4;
		cout << test << "\n";
		cout << rand() << "\n";
	}
	
 
	
		return 0;
}
