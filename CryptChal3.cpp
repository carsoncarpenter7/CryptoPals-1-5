#include <iostream>
#include <map>

#include "utils.h"
using namespace std;

int challenge_3() {
  cout << "\n-------- CHALLENGE 3 --------\n";
  cout << "\n Decrypting Single-Byte XOR Cypher " << endl;
  char src[] = "1b37373331363f78151b7f2b783431333d78397828372d363c78373e783a393b3736";
  int n = strnlen(src, BUFSIZ);
  char* xor_dst = get_bufn(src, n);
  decode_single_char_xor(src, xor_dst, n); // Freq Map Initilizer error when calling funciton?? [NOT COMMENT OUT IF NOT COMPILING]
  print_array("   ", xor_dst, n/2);

  cout << "\n";
  cout << "\n\tNOTE KNOWN BUG: A unknown initilizer error can occur when calling decode_single_char_xor and initializing the freq map. \t        Error should not occur aboce C++11 (Current: C++17: See task.json)" << endl << endl;
  cout << "\n\tIF this error occurs and the other challenges wont compile, simply commented out the function 'decode_single_char_xor' "<< endl;
  cout << "\tand recompile to test the other challeges" << endl << endl; 
  return 0;
}
 