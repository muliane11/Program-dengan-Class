#include <iostream>
#include <cstdlib>

using namespace std;
class Persegipanjang{
    int x, y;
      public:
    void set_X (int,int);
    int luas (void) {return (x*y);}
};
void Persegipanjang::set_X (int a, int b)
 {
  x = a;
  y = b;
}
int main(int argc, char** argv) {
    Persegipanjang pers;
      pers.set_X (6,6);
      cout << "Luas: " << pers.luas();

    return 0;
}
