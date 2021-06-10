#include "dispatcher.h"
#include "request.h"

#include <iostream>
#include <string>
#include <csignal>
#include <thread>
#include <chrono>

using namespace std;


sig_atomic_t signal_caught = 0;
mutex logMutex;
void sigint_handler(int sig) {
signal_caught = 1;
}
void logFnc(string text) {
logMutex.lock();
cout << text <<"n";
logMutex.unlock();
}