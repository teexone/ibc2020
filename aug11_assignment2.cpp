#include "iostream"
#include "string"
#include "cmath"

using namespace std;
int main() {
    int sum = 100, x = 1, y = 3, z = 2;
    int ans = -1;
    for(int i = 0; i <= x; i++)
        for(int j = 0; j <= y; j++)
            for(int k = 0; k <= z; k++)
                if(sum - (i*5 + j*2 + k*1) == 0)
                    ans = (ans > (i + j + k) || ans == -1? i + j + k : ans);
    if(ans == -1) {
        printf("Impossible");
    } else printf("Possible: %d", ans);
}
