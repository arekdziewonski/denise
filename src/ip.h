#ifndef IP_H
#define IP_H

#include <stdint.h>
#include <stdlib.h>

typedef uint8_t IP[4];

int iptostr(IP ip, char* buf, size_t s);

#endif
