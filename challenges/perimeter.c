/* Author: Henry Danso
Subject: Challange to print a perimeter and area of a rectangle
Date: 08|09|22
*/

#include <stdio.h>
int main() {
    //declare variables in double
    double height = 15.3;
    double width = 32.3;

    //calculate for the perimeter
    //perimeter is height + width * 2
    double perimeter = (height + width) * 2;
    //calculate for the area
    //area is width * height
    double area = height * width;

    //print the result
    printf("The Perimeter is: %f", perimeter);
    printf("\nThe Area is: %f", area);

    return 0;
}