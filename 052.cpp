#include "lib0052.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(nullptr);
  int l = 1, r = 1000001;
  Init();
  while(r - l > 1) {
    int m = (l + r) >> 1;
    int res = Query(m);
    if(res == 1) l = m;
    else r = m;
  }
  Answer(l);
  return 0;
}
