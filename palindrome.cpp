#include <iostream>
#include <string>

using namespace std;

string rmv(string s) 
{ 
    for (int i = 0; i < s.size(); i++) 
    { 
          
        // Finding the character whose  
        // ASCII value fall under this 
        // range 
        if ((s[i] < 'A' || s[i] > 'Z') &&(
            s[i] < 'a' || s[i] > 'z'))  
        {    
            // erase function to erase  
            // the character 
            s.erase(i, 1);  
            i--; 
        }
        if (isupper(s[i]))
        {
            s.replace(i,1,1,tolower(s[i]));
        }
    } 
    return s; 
}
bool palin(string s)
{
    bool sth = true;
    for (int i = 0; i < s.size()/2; i++) 
    {
        sth = sth && (s[i] == s[s.size()-i-1]);
    }
    return sth;
}
int main() {
    string str;
    string sth = "";
    getline(cin, str); 
    if(! palin(rmv(str))) sth = "not ";
    cout << "The input string is "<< sth <<"a palindrome.";
}
