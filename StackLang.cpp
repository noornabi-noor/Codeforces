#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
typedef long long ll;
const int sz = 1e6;

deque<int> dq;      // Deque to store the stack elements
ll sum = 0;         // Sum of all elements in the stack
bool flag = 1;      // Flag to determine normal or reversed order

// Function to push an element x into the deque
void fpush(int x) {
   if (flag) dq.emplace_back(x);   // Normal order: add to the back
   else dq.emplace_front(x);       // Reversed order: add to the front
   sum += x;

   // Remove the oldest element if deque size exceeds max size
   if (dq.size() > sz) {
      if (flag) sum -= dq.front(), dq.pop_front();
      else sum -= dq.back(), dq.pop_back();
   }
}

// Function to pop the top element from the deque
void fpop() {
   if (dq.empty()) return;

   if (flag) sum -= dq.back(), dq.pop_back();    // Normal order: remove from back
   else sum -= dq.front(), dq.pop_front();       // Reversed order: remove from front
}

// Function to print the top element of the deque
void fprint() {
   if (dq.empty()) {
      puts("-");    // Print "-" if deque is empty
      return;
   }

   int res = flag ? dq.back() : dq.front();  // Get top element based on flag
   printf("%d\n", res);
}

int ara[sz << 1];   // Array to store repeated elements temporarily

int main() {
   ios_base::sync_with_stdio(0); cin.tie(0);
   string s;

   // Command processing loop
   while (cin >> s) {
      if (s == "PUSH") {
         int x;
         cin >> x;
         fpush(x);    // Push x into deque
      }
      else if (s == "POP") {
         fpop();      // Pop top element from deque
      }
      else if (s == "PRINT") {
         fprint();    // Print top element of deque
      }
      else if (s == "SIZE") {
         printf("%d\n", (int) dq.size());  // Print current size of deque
      }
      else if (s == "SUM") {
         printf("%lld\n", sum);            // Print current sum of deque elements
      }
      else if (s == "REPEAT") {
         int k;
         cin >> k;

         int z = dq.size();
         if (z == 0) continue;  // Skip if deque is empty

         // If repeating will exceed the size limit
         if (z + z > sz) {
            int need = sz - z;
            int m = 0;

            // Copy required number of elements to ara based on flag
            while (m < need) {
               ara[m] = flag ? dq[z - 1 - m] : dq[m];
               m++;
            }

            // Perform repetition as long as the size limit isn't exceeded
            while (k-- && dq.size() < sz) {
               for (int i = 0; i < m && dq.size() < sz; i++) {
                  int x = ara[i];
                  if (!flag) dq.emplace_back(x);   // Add to back if reversed
                  else dq.emplace_front(x);        // Add to front if normal
                  sum += x;
               }
            }
            continue;
         }

         // Copy entire deque to ara for repetition
         int m = 0;
         while (m < dq.size()) {
            ara[m] = flag ? dq[z - 1 - m] : dq[m];
            m++;
         }

         // Repeat entire deque up to max size
         while (k-- && dq.size() < sz) {
            for (int i = 0; i < m && dq.size() < sz; i++) {
               int x = ara[i];
               if (!flag) dq.emplace_back(x);
               else dq.emplace_front(x);
               sum += x;
            }
         }
      }
      else if (s == "REVERSE") {
         flag ^= 1;   // Toggle the flag to reverse the order of operations
      }
   }
}