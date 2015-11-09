#include<iostream>
using namespace std;

char *strcpy(char *strDest, const char *strSrc)
{
  if ( strDest == NULL || strSrc == NULL)
    return NULL;
  if ( strDest == strSrc)
    return strDest;
  char *tempptr = strDest;
  while((*strDest++ = *strSrc++) != '\0');
  return tempptr ;
}

int main()
{
  char dec[] = "good";
  char src[] = "bad";
  cout << strcpy(dec,src) << endl;
}
