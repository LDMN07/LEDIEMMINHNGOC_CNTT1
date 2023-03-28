#include < iostream >
using namespace std ;
struct Point 
{
  int x;
  int y;
}
void inputPoint ( Point & p ) 
{
  cout << "Nhap toa do x: ";
  cin >> x;
  cout << "Nhap toa do y: ";
  cin >> y;
}
void outputPoint ( const Point & p )
{
  cout << "(" << x << ", " << y << ")" << endl;
}
int main () 
{
  Point  p ;
  inputPoint ( P ) ;
  outputPoint ( p ) ;
  return 0 ;
}
