#ifndef TEXT_H
#define TEXT_H

#include <string>
#include <iostream>

using namespace std;

#define ENTER_INFORMATION(content, variable, condition) \
    do                                                  \
    {                                                   \
        cout << content;                                \
        cin >> variable;                                \
    } while (condition)


class Text
{
private:
    string text;
    int numWord = 0;
    int numCharA = 0;
public:
    Text(){}
    Text(string st);
    void setText(string st);
    int countWord();
    int countCharA();
    void castForm();
    string getText();
};

#endif