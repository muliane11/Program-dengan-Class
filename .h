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
