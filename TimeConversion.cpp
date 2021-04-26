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
    
    s.resize(8);    
    return s;
}
