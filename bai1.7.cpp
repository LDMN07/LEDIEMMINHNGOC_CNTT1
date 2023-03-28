#include < iostream >
using namespace std ;
struct Date 
{
  int day ;
  int month ;
  unsigned ỉnt year ;
}
bool isValidDate ( Date date ) 
{
  bool isValid = true ;
  if ( date.month < 1 || date.month > 12 )
  {
    isValid = false ;
  }
  else
  {
    int daysInMonth ;
    switch ( date.month ) 
    {
      case 2 :
        daysInMonth = ( date.year % 4 == 0 && date.year % 100 != 0 ) || ( date.year % 400 == 0 ) ? 29 : 28 ;
        break ;
      case 4 :
      case 6 :
      case 9 :
      case 11 :
        daysInMonth = 30 ;
        break ;
      default :
        daysInMonth = 31 ;
        break ;
    }
    if ( date.day < 1 || date.day > daysInMonth )
    {
      isValid = false ;
    }
  } 
  return isValid ;
}
void inputDate ( Date& date )
{
  do 
  {
    cout << " Nhap ngay : " ;
    cin >> date.day ;
    cout << " Nhap thang : " ;
    cin >> date.month ;
    cout << " Nhap nam : " ;
    cin >> date.year ;
    if ( !isValidDate ( date ) ) 
    {
      cout << " Ngay khong hop le, vui long nhap lai! " << endl ;
    }
  }
  while ( !isValidDate ( date ) ) ;
}
void outputDate ( Date date ) 
{
  cout << " Ngay " << date.day << "/" << date.month << "/" << date.year << endl ;
}
int main ()
{
  Date date ;
  inputDate ( date ) ;
  outputDate ( date ) ;
  return 0 ;
}
