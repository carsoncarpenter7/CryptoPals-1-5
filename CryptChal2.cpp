#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
// using namespace std;

#include "utils.h"


int challenge_2() { 
  std::cout << "\n-------- CHALLENGE 2 --------\n";
  char src1[] = "1c0111001f010100061a024b53535009181c";
  char src2[] = "686974207468652062756c6c277320657965";

  int n = strnlen(src1, sizeof(src1));
  char* hexsrc1 = get_bufn(src1, 2 * n);
  char* hexsrc2 = get_bufn(src2, 2 * n);
  char* result  = get_bufn(src1, 2 * n); 

  hex_decoded(src1, hexsrc1, n);
  std::cout << std::endl;
  hex_decoded1(src2, hexsrc2, n);

  char xor_dst[BUFSIZ];
  memset(xor_dst, 0, sizeof(xor_dst));
  block_xor(hexsrc1, hexsrc2, xor_dst, n);

  // convert two nibbles (4 bits each) back to two hex characters
  // e.g., the eight bit character:  01110100 splits to
  //       0111 0100 --->  '7' and '4'

  int mask = 15;// only want 4 bits at a time
  for (int i = 0; i < n/2; ++i) { 
    // std::cout << tobinary_8(xor_dst[i]) << "\n";
    result[2 * i] = hex_char((xor_dst[i] >> 4) & mask);     // convert to hex
    result[2 * i + 1] = hex_char(xor_dst[i] & mask);
  }
  
  std::cout << std::endl;
  std::cout << "\n-------- After block_xor --------\n";
  std::cout << result << "\n\n";

  free(hexsrc1);
  free(hexsrc2);
  free(result);

  return 0;
}
