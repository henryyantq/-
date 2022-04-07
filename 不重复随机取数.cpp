#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void random(int divisor, int quantity) {
 int *queue = new int [divisor];
 srand(time(0));
 int i, j;
 for(i = 0; i < quantity; i++) {
  while (1) {
   int x = rand() % divisor;
   for (j = 0; j < i; j++) {
    if (queue[j] == x) break;
   }
   if (j == i) {
    queue[i] = x;
    cout << x << endl;
    break;
   }
  } //while loop
 } //for loop
}

int main() {
 int div, quan;
 cin >> div >> quan;
 random(div, quan);
}
