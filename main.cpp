#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <windows.h>

#include "input"
#include "rules"
#include "morseConvertor"
#include "printer"
#include "request"
#include "beeper"

using namespace std;

int main(){ 
    printRules();
    string input = userInput();
    vector<string> morseVal = convertToMorse(input);
    printMorse(morseVal);
    int choice = requestBeep();
    if (choice) initiateBeeper(morseVal);
    
    return 0;
}
