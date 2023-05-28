#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void main() {
    float numone;
    float numtwo;
    std::cout << "Type the first number: ";
    std::cin >> numone;
    std::cout << "Type the second number: ";
    std::cin >> numtwo;
    float resulta;
    float results;
    float resultd;
    float resultm;
    resulta = numone + numtwo;
    results = numone - numtwo;
    resultd = numone / numtwo;
    resultm = numone * numtwo;
    std::cout << numone << "+" << numtwo << "=" << resulta << std::endl;
    std::cout << numone << "-" << numtwo << "=" << results << std::endl;
    std::cout << numone << "*" << numtwo << "=" << resultm << std::endl;
    std::cout << numone << "/" << numtwo << "=" << resultd << std::endl;
}