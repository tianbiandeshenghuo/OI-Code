#include <iostream>

using namespace std;

const int MAXN = 12;

char c;
int ha, wa, hb, wb, hx, wx, sum;
bool a[MAXN * 3][MAXN * 3], b[MAXN * 3][MAXN * 3], x[MAXN][MAXN];

bool C(int xa, int ya, int xb, int yb) {
  int c = 0;
  for (int i = 1; i <= MAXN; i++) {
    for (int j = 1; j <= MAXN; j++) {
      if (x[i][j] != (a[i + xa + MAXN][j + ya + MAXN] | b[i + xb + MAXN][j + yb + MAXN])) {
        return 0;
      }
      c += a[i + xa + MAXN][j + ya + MAXN] + b[i + xb + MAXN][j + yb + MAXN];
    }
  }
  return (c == sum);
}

int main() {
  ios::sync_with_stdio(0), cin.tie(0);
  cin >> ha >> wa;
  for (int i = 1; i <= ha; i++) {
    for (int j = 1; j <= wa; j++) {
      cin >> c, a[i + MAXN][j + MAXN] = (c == '#'), sum += (c == '#');
    }
  }
  cin >> hb >> wb;
  for (int i = 1; i <= hb; i++) {
    for (int j = 1; j <= wb; j++) {
      cin >> c, b[i + MAXN][j + MAXN] = (c == '#'), sum += (c == '#');
    }
  }
  cin >> hx >> wx;
  for (int i = 1; i <= hx; i++) {
    for (int j = 1; j <= wx; j++) {
      cin >> c, x[i][j] = (c == '#');
    }
  }
  for (int i1 = -MAXN; i1 <= MAXN; i1++) {
    for (int j1 = -MAXN; j1 <= MAXN; j1++) {
      for (int i2 = -MAXN; i2 <= MAXN; i2++) {
        for (int j2 = -MAXN; j2 <= MAXN; j2++) {
          if (C(i1, i2, j1, j2)) {
            cout << "Yes";
            return 0;
          }
        }
      }
    }
  }
  cout << "No";
  return 0;
}
