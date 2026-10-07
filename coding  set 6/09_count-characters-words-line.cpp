#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("article.txt");

    string line;
    int characters = 0;
    int words = 0;
    int lines = 0;

    while (getline(file, line))
    {
        lines++;

        characters = characters + line.length();

        string word;
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ')
            {
                words++;
            }
        }

        if (line.length() > 0)
        {
            words++;
        }
    }

    file.close();

    cout << "Characters: " << characters << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;

    return 0;
}