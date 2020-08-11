#include "iostream"
#include "string"
#include "cmath"
void go() {

}
using namespace std;
int main() {
  int a[6][6] = {
          {10, 7, 3, 4, 5, 7},
          {1, 2, 5, 7, 11, 3},
          {-1, 2, 34, 1, 10, 5},
          {1, 3, 5, 7, 1, 9},
          {1, 2, 3, 4, 1, 6},
  };
  int ans = (1U << 30U);
  for(int c1 = 0; c1 <= 5; c1++) {
      for(int c2 = 0; c2 <= 5; c2++) {
          for (int c3 = 0; c3 <= 5; c3++) {
              for (int c4 = 0; c4 <= 5; c4++) {
                  for (int c5 = 0; c5 <= 5; c5++) {
                      for (int c6 = 0; c6 <= 5; c6++) {
                          if (c1 != c2 && c2 != c3 && c3 != c4 && c4 != c5 && c5 != c6) {
                              ans = min(ans, a[c1][c2] + a[c2][c3] + a[c3][c4] + a[c4][c5] + a[c5][c6] + a[c6][c1]);
                          }
                      }
                  }
              }
          }
      }
  }
  printf("%d", ans);
}
