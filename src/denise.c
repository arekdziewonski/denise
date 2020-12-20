#include "resolver.h"
#include "ip.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc+1]) {
  IP ip;
  resolve(argv[1], &ip);

  char buffer[16];
  if (iptostr(ip, buffer, 16)) {
    printf("result: %s\n", buffer);
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}
