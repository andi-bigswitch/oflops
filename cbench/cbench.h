#ifndef CBENCH_H
#define CBENCH_H

#ifndef BUFLEN
#define BUFLEN 65536
#endif

#ifdef __linux__
#define USE_EPOLL
#endif

#endif
