#include < iostream >
using namespace std ;
struct Phanso 
{
  int tu so 
  int mau so 
}
void inputPhanso ( Phanso ps ) 
{
  cout << " nhap tu so : " ;
  cin >> ps.tuso;
  cout << " nhap mau so : " ;
  cin >> ps.mauso ;
}
void outputPhanso ( constPhanso & ps )
{
  cout << ps.tuso << "/" << ps.mauso ;
}
int main ()
{
  Phanso ps ;
  inputPhanso ( ps ) ;
  outputPhanso ( ps ) ;
  return 0 ;
}
