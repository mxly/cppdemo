#include <iostream>

using namespace std;
class MyComplex
{
  public:
    MyComplex(double rv=0.0,double iv=0.0) {r = rv;i = iv;}
    friend istream& operator>> (istream& in,MyComplex& cp);
    friend ostream& operator<< (ostream& out,MyComplex& cp);
  private:
    double r;
    double i;
};

istream& operator>> (istream& in,MyComplex& cp)
{
  cout << "please input r:" << endl;
  in >> cp.r;
  cout << "please input x:" << endl;
  in >> cp.i;
  return in;
}

ostream& operator<< (ostream& out,MyComplex& cp)
{
  out << "r:" << cp.r << endl;
  out << "i:" << cp.i << endl;
  return out;
}

int main()
{
  MyComplex cp;
  cin >> cp;
  cout << cp;
  return 0;
}
