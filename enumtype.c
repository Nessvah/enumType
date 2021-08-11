#include <stdio.h>

int main ()

{
    //Initiate enum with values
    enum company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft};

    //Declaring values to variables
    enum company myCompany, yourCompany, anotherCompany;

    myCompany = Xerox;
    yourCompany = Google;
    anotherCompany = Ebay;

    //Output values 
    printf("The value of Xerox is %d\n", Xerox);
    printf("The value of Google is %d\n", Google);
    printf("The value of Ebay is %d\n", Ebay);

    //C compiler treats enumeration identifiers as integer constants. 
    //If we want, we can assign an integer to the identifier when the data type is defined.

    printf("Lets see another example.\n");
    
    //Initiate another enum with some values
    enum direction {up, down, left = 10, right};

    enum direction firstDir, secondDir, thirdDir;

    firstDir = up;          //This will display 0
    secondDir = left;       //This will be 10 as we assigned
    thirdDir = right;       //This will be 11 because it comes right after the left direction that we assigned value 10

    //Output values
    printf("The value of up direction is %d\n", firstDir);
    printf("The value of left is: %d\n", secondDir);
    printf("The value of right is %d\n", thirdDir);

    return 0;


}