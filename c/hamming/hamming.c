#include "hamming.h"

#include <string.h>

int compute(const char *lhs, const char *rhs) {
    // Check if `lhs` and `rhs` are not the same length.
    if (strlen(lhs) != strlen(rhs)) {
        return -1;
    }

    int hamming_distance = 0;

    // Traverse the strings and compute the Hamming Distance between them.
    for (int i = 0; lhs[i] != '\0'; i++) {
        if (lhs[i] != rhs[i]) {
            hamming_distance++;
        }
    }

    return hamming_distance;
}
