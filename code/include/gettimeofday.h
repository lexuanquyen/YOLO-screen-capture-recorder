#pragma once

#include <time.h>
//#include <pthread.h>
#include <winsock.h> //struct timeval
#if defined(_MSC_VER) || defined(_MSC_EXTENSIONS)
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000Ui64
#else
  #define DELTA_EPOCH_IN_MICROSECS  11644473600000000ULL
#endif
 
struct timezone 
{
  int  tz_minuteswest; /* minutes W of Greenwich */
  int  tz_dsttime;     /* type of dst correction */
};

int gettimeofday(struct timeval *tv, struct timezone *tz);

/* never worry about timersub type activies again -- from GLIBC and upcased. */
int timersub(struct timeval *a, struct timeval *b, struct timeval *result);

struct timespec { long tv_sec; long tv_nsec; };
int clock_gettime(int dummy, struct timespec *ct);