#include <iostream>
using namespace std;

int main() {
  int y;
  cout << "Masukkan banyak array: ";
  cin >> y;
  int *x = new int[y];
  for (int i = 0; i < y; i++) {
    cout << "Masukkan angka ke " << i << " : ";
    cin >> x[i];
    cout << endl;
  }
  cin.ignore();
  for (int i = 1; i < y; i++) {
    int key = x[i];
    int j = i - 1;
    while (j >= 0 && x[j] < key) { // modified
      x[j + 1] = x[j];
      j--;
    }
    x[j + 1] = key;
    cout << "Proses sorting" << endl;
    for (int m = 0; m < y; m++) {
      cout << x[m] << " ";
    }
    cout << endl;
  }
  cout << "Hasil akhir" << endl;
  for (int m = 0; m < y; m++) {
    cout << x[m] << " ";
  }
  cout << "\n\nPress any key to exit..." << endl;
  getchar(); 
  return 0;
}