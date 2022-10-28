
#include <iostream>

using namespace std;
int multiplyTwoNumbers(int a, int b) {
    if (a<0 && b<0) {
        a = a*(-1);
        b = b*(-1);
    }
    if (a>0 && b<0) {
        a = a*(-1);
        b = b*(-1);
    }
   int result = 0;
   while (b > 0) {
      if (b & 1) {
         result += a;
         }
      a = a << 1;
      b = b >> 1;
   }
   return result;
}
int main() {
   cout << multiplyTwoNumbers(-75, 4) << endl;
   cout << multiplyTwoNumbers(90, 9) << endl;
   cout << multiplyTwoNumbers(83, 66) << endl;
   return 0;
}
