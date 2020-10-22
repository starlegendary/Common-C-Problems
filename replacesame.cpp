#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
    //Write your code here.
    string str,a,b;
    getline(cin, str);
    cin >> a;
    cin >> b;
    int la = a.length();
    int lb = b.length();
    int change[10000];
    int j = 0;
    for(int i = 0; i<(str.length()-la+1); i = i+1)
    {
        if(str.substr(i, la) == a)
        {
            change[j] = i; 
            j++;
        }
    }
    int x = 0;
    for(int i = 0; i < j; i ++)
    {
        str.replace(change[i]+x, la,b);
        x += lb - la;
    }

    cout << str;

}
