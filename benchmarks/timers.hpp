#ifndef TIMERS_H
#define TIMERS_H
#include <chrono>

typedef std::chrono::steady_clock Clock;
typedef std::chrono::nanoseconds ns;
typedef std::chrono::microseconds mus;
typedef std::chrono::duration<double> dsec;
typedef Clock::time_point timePoint;

timePoint start;
timePoint stop;
long long duration{0};

#endif