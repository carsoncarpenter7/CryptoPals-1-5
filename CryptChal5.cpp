#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "utils.h"

string repeating_key_xor1(string a){
    string key = "ICE";
    int n = a.size();
    string encryptedtext = "";
    string newtext = ""; // not used, try storing new string here
    for (int i = 0; i < n; i++) {
        encryptedtext += a[i] xor key[i % 3];
    }
    cout << "0";
    for (int i = 0; i < n; i++) {
        cout << hex << (int)encryptedtext[i];
    }
    cout << endl;
    return a;
}

int challenge_5() {
    cout << endl;
    cout << "\n-------- CHALLENGE 5 --------\n" << endl;
    string encrypt_message = "Burning 'em, if you ain't quick and nimble I go crazy when I hear a cymbal";
    cout << "Encrypting your text: " << endl;
    cout << encrypt_message << endl << endl;
    cout << "Message Encrypted: " << endl; 
    repeating_key_xor1(encrypt_message);
    cout << endl;

    return 0;
}

