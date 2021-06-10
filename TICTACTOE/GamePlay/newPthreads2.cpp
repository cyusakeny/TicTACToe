#include <iostream>
#include<pthread.h>
#include<mutex>
#include<unistd.h>
using namespace std;

int main()
{
    int counter = 60; //amount of seconds
    sleep(1);
    while (counter >= 1)
    {
        cout << "\rTime remaining: " << counter << flush;
        sleep(1);
        counter--;
    }
}