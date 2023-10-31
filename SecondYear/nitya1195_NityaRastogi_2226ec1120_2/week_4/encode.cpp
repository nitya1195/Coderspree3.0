#include <iostream> 
#include<string>
using namespace std;
string encode(string &message)
{

 string encoded_m = "";
  int count = 1;
  char c_char = message[0];
  for (int i = 1; i < message.length(); i++) {
    if (message[i] == c_char) {
      count++;
    } else {
      encoded_m += c_char + to_string(count);
      c_char = message[i];
      count = 1;
    }
  }
  encoded_m += c_char + to_string(count);
  return encoded_m;
}