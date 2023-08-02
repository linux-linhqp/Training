#include "text.h"

Text::Text(string st)
{
    text = st;
}

int Text::countWord()
{
    numWord = 0;
    if (text[0] != ' ')
        ++numWord;
    for (int i = 1; i < text.length() - 1; i++)
    {
        if (text[i] == ' ' && text[i + 1] != ' ')
            ++numWord;
    }
    return numWord;
}

int Text::countCharA()
{
    numCharA = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'a' || text[i] == 'A')
            ++numCharA;
    }
    return numCharA;
}

void Text::castForm()
{
    bool checkText = false;
    do
    {
        if (text[0] == ' ')
            text.erase(0, 1);
        else
            checkText = true;
    } while (checkText != true);

    checkText = false;
    do
    {
        if (text[text.length() - 1] == ' ')
            text.erase(text.length() - 1, 1);
        else
            checkText = true;
    } while (checkText != true);

    for (int i = 1; i < text.length() - 1; i++)
    {
        if (text[i] == ' ')
        {
            int j = i + 1;
            int count = 0;
            while (text[j] == ' ')
            {
                count++;
                j++;
            }
            text.erase(i + 1, count);
        }
    }
}

string Text::getText()
{
    return text;
}

void Text::setText(string st)
{
    text = st;
}