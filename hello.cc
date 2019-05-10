#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

#define PI 3.14159265359

using namespace std;

int main()
{
	for(int i=-4; i<5;i++)
	{
		for(int j=-4; j<5; j++)
		{
			int signj = (j > 0) - (j<0);
			int yaw = signj*acos(i/sqrt(pow(i,2)+pow(j,2)))*180/PI; 

			cout << "signy:" << signj << " x:" << i <<" y:" << j << " yaw:" << yaw  << "\n";
			
		}
	}
	
 
	
	return 0;
}
