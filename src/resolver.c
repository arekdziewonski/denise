#include "resolver.h"
#include <string.h>

const uint8_t DUMMY_IP[] = {140, 82, 121, 4};

void resolve(const char domain[static 1], IP* result) {
    memcpy(result, DUMMY_IP, sizeof(IP));
}
