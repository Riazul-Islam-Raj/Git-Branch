#include <bits/stdc++.h>

using namespace std;

int main() {
  int num;
  cin >> num;

  for(int i=1; i<=(num+1); i++) {

    for(int j=i; j<=(num+1-1); j++) {
      cout << "  ";
    }
    for(int k=1; k<=(2*i-1) ; k++) {
      cout << "* ";
    }
    cout << endl;
  }
  for(int i=1; i<=num; i++) {
    for(int j=1; j<=(i); j++) {
      cout << "  ";
    }
    for(int k=1; k<=(2*(num-i)+1); k++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
