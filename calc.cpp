#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
    float numone;
    float numtwo;
    float resulta;
    float results;
    float resultd;
    float resultm;
    float resultsqrtone;
    float resultsqrttwo;
    float resultnonesquare;
    float resultntwosquare;

    std::cout << "Type the first number: ";
    std::cin >> numone;
    std::cout << "Type the second number: ";
    std::cin >> numtwo;
    
    resulta = numone + numtwo;
    results = numone - numtwo;
    resultd = numone / numtwo;
    resultm = numone * numtwo;
    resultsqrtone = sqrt(numone);
    resultsqrttwo = sqrt(numtwo);
    resultnonesquare = numone * numone;
    resultntwosquare = numtwo * numtwo;

    std::cout << numone << "+" << numtwo << "=" << resulta << std::endl;
    std::cout << numone << "-" << numtwo << "=" << results << std::endl;
    std::cout << numone << "*" << numtwo << "=" << resultm << std::endl;
    std::cout << numone << "/" << numtwo << "=" << resultd << std::endl;
    std::cout << numone << " squared is " << resultnonesquare << std::endl;
    std::cout << numtwo << " squared is " << resultntwosquare << std::endl;
    std::cout << "Square root of " << numone << " is " << resultsqrtone << std::endl;
    std::cout << "Square root of " << numtwo << " is " << resultsqrttwo << std::endl;
    system("pause");
}