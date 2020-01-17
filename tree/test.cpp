#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string str_hr = s.substr(0,s.find(':'));
    stringstream stream(str_hr);
    int hr;
    stream>>hr;
    string mer = s.substr(s.length()-2,s.length());
    hr = (mer.compare("AM")==0)?hr%12:hr%12+12;
    stream.clear();
    stream<<hr;
    str_hr = "";
    str_hr =  stream.str() + s.substr(s.find(':'),s.find("M")-3);
    cout<<str_hr;
    return str_hr;
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
