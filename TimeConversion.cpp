string timeConversion(string s)
{
    string hour = s.substr(0, 2);
    int time = std::stoi(hour) + 12;

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
    
    s.resize(8);    
    return s;
}
