#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

#include "utils.h"


int challenge_1() {
    std::cout << "\n-------- CHALLENGE 1 --------\n";

    char hexbuf[] = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    char decbuf[BUFSIZ];
    char base64_buf[BUFSIZ];

    memset(decbuf, 0, sizeof(decbuf));
    memset(base64_buf, 0, sizeof(base64_buf));
    int n = strlen(hexbuf);
    hex_decoded(hexbuf, decbuf, n);
    std::cout << std::endl;
    
    std::cout << "\n-------- Base64 conversion --------\n";
    convert_to_base64(decbuf, base64_buf, strlen(decbuf));
    std::cout << base64_buf << "\n\n";

    return 0;
}

