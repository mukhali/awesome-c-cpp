// #include<iostream>
#include"stdio.h"
#include"assert.h"

// using namespace std;

char *m_strcpy(char *strDest, const char *strSrc)
{
  assert((strDest != NULL) && (strSrc != NULL));
  if ( strDest == strSrc)
    return strDest;
  char *tempptr = strDest;
  while((*strDest++ = *strSrc++) != '\0');
  return tempptr ;
}

int main()
{
  char dec[10] = "good";
  char src[10] = "bad";

  scanf("%s%s", dec, src);

  // printf("%s, %s\n", dec, src);
  printf("%s\n", m_strcpy(dec, src));
  // cout << strcpy(dec,src) << endl;
}
