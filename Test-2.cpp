#include <bits/stdc++.h>

using namespace std;

int main() {
  int num, num2;
  cin >> num >> num2;

  for(int i=1; i<=(num+1); i++) {
    // First top-left

    for(int j=i; j<=(num+1-1); j++) {
      cout << "  ";
    }
    for(int k=1; k<=(2*i-1) ; k++) {
      cout << "* ";
    }

    // Loop
    for(int l=1; l<num2; l++) {

      // First top-right
      for(int k=1; k<=(2*(num+1-i)+1); k++) {
        cout << "  ";
      }
      for(int j=1; j<=(2*i-1); j++) {
        cout << "* ";
      }
    }
    cout << endl;
  }
  for(int i=1; i<=num; i++) {
    // First bottom-left
    for(int j=1; j<=(i); j++) {
      cout << "  ";
    }
    for(int k=1; k<=(2*(num-i)+1); k++) {
      cout << "* ";
    }
    //Loop
    for(int l=1; l<num2; l++) {

      // First bottom-right
      for(int k=1; k<=(2*i+1) ; k++) {
        cout << "  ";
      }
      for(int j=(i); j<=(2*(num)-i); j++) {
        cout << "* ";
      }
    }
    cout << endl;
  }
  return 0;
}

//That's right I am a Genious !!!
