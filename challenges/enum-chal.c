/* Author: Henry Danso
   Purpose: Enum Challenge
   Date: 10|09|22
*/

#include <stdio.h>>
int main()
{
    //declare your enum list in the question
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    //declare the variables stated in the question to show values
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The Value of xerox is: %d\n", xerox);
    printf("The Value of google is: %d\n", google);
    printf("The Value of ebay is: %d\n", ebay);
    return (0);
}