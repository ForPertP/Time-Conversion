#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
string timeConversion(string s)
{
    int time = std::stoi(s.substr(0, 2)) + 12;
    
    if (s[8] == 'P')
    {
        if (time == 24)
        {
            time = 12;
        }
        s.replace(0, 2, std::to_string(time));
    }
    else
    {
        if (time == 24)
        {
            s.replace(0, 2, "00");
        }
    }
    
    s.erase(8, 2);
    //s.resize(8);    
    
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
