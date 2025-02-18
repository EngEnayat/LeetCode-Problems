#include <iostream>
#include <string>
using namespace std;
class Bracket
{
public:
    bool isValid(string s)
    {
    int leftBrack, rightBrack;
    int leftPar, rightPar;      
    int rightAko, leftAko;      
    leftBrack= rightBrack= leftPar = rightPar = rightAko= leftAko = 0;
    int number=0;
    for(char i : s)
    {
        number++;
        if(i == '(')
        {
            if(s[number ] == ']' || s[number] == '}' ) return false;
            leftPar ++;
        }  
        else if(i == ')') rightPar ++;
        else if(i == '[')
        {   
            if(s[number] == ')' || s[number+1] == '}') return false;
            // cout << "Num: "<< number << s[number] << "i here: "<< i<< endl;
            leftBrack++;
        }
        else if(i == ']') rightBrack++;
        else if(i == '{')
        {
            if(s[number ] == ')' || s[number ] == ']') return false;
            leftAko++;
        }
        else if(i == '}') rightAko++;
    }
    if(leftBrack == rightBrack && leftPar== rightPar && rightAko== leftAko) return true;
    else return false;
}
};