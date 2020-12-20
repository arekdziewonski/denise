#include "ip.h"
#include <stdlib.h>
#include <stdio.h>

int iptostr(IP ip, char* buf, size_t s) {
  return snprintf(buf, s, "%d.%d.%d.%d", ip[0], ip[1], ip[2], ip[3]);
}
