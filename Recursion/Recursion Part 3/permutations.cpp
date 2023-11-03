#include <iostream>
using namespace std;

void permutations(string ans, string original)
{   if(original == "")
    {
        cout<<ans<<endl;
        return;
    }
    for(int i = 0;i < original.length();i++)
    {
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutations(ans+ch,left+right);
    }
}

int main()
{
    string str = "abc";
    permutations("", str);
    // substr(str.begin(),length() upto which the substr is required) -> str.begin()[inclusive]
    //  string substr (size_t pos, size_t len) const;/

    // c idx -> 2, string len = 5 (0-4)
    // string left = str.substr(0,2);
    // cout<<left<<endl;
    // string right = str.substr(2+1);
    // cout<<right<<endl;
    return 0;
}