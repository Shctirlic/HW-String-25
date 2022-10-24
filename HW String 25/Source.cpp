#include <iostream>
#include <string>
#include <string>

using namespace std;

char big_letter(char c)
{
    if (c >= 'a' && c <= 'z') return c - 32;
    else                      return c;
}
bool isPalindrome(const string& str)
{
    int l = str.length();

    for (int i = 0; i < l / 2; i++)
    {
        if (big_letter(str[i]) != big_letter(str[l - 1 - i]))
            return false;
    }

    return true;
}

int counter_punctuation(const string& str)
{
    int k = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == '?')
        {
            k++;
        }
    }
    return k;
}

string func(const string& str, char c)
{
    int l = str.length();
    int k = 0;

    for (int i = 0; i < l; i++)
    {
        if (str[l - 1 - i] == c)
        {
            k = l - 1 - i;
            break;
        }
    }

    string  rez;

    for (int i = k; str[i]; i++)
        rez += str[i];

    return rez;
}



int main()
{
    
      string str = "Hello world!";
    char   sym = 'o';
    string res;

    for (int i = 0; i < str.length(); i++)
        if (str[i] == sym)
            res += sym;

    cout << res << endl;
    // на экране oo
    
    
      string  str= "AbqBx";
    cout << isPalindrome(str) << endl;
    
  
    string  str = "A,b!!q&?  B.,x"; // 8
    cout << counter_punctuation(str) << endl;
    

    
       string str = "Hello world!";
      char sym = 'o';
      cout << func(str, sym) << endl;
    




}
