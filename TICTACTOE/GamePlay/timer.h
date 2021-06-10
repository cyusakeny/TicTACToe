// CPP program to create a timer
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include<mutex>
using namespace std;
std::mutex mtx;
using namespace std;
class timer
{
public:
struct details{

}detail;
 int hours = 0;
int minutes = 0;
int seconds = 0;
void displayClock()
{

	system("clear");

	cout << setfill(' ') << setw(55) << "		 TIMER		 \n";
	cout << setfill(' ') << setw(55) << " --------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void* timing(void * flag)
{   mtx.lock();
	int stopsign = (int) flag;
	while (seconds>=0) {
	  if (stopsign==1)
		{
			break;
		}
		displayClock();
		sleep(1);
		seconds--;
      	
	}
	mtx.unlock();
}

};


