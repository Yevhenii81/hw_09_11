#include <iostream>
using namespace std;




int main()
{
    int maxLength = 100;

    char* name = new char[maxLength] {};
    cout << name << "\n";

    cout << "Please, enter your text: ";
    gets_s(name, maxLength);

    int spaces = 0;
    int length = strlen(name);

    /*for (int i = 0; i < strlen(name); i++)
    {
        cout << name[i] << "";
    }*/

    for (int i = 0; i < length; i++)
    {
        if (name[i] == ' ')
        {
            spaces++;
        }
    }

    int nonSpaceChars = length - spaces;
    int wordCount = spaces + 1;

    float averageLength = nonSpaceChars / wordCount;

    if (wordCount > 0)
    {
        cout << "spaces: " << spaces << "\n";
        cout << "word count: " << wordCount << "\n";
        cout << "non space chars: " << nonSpaceChars << "\n";
        cout << "average word length: " << averageLength << "\n";
        
    }
    else {
        cout << "There are no words in a sentence";
    }


    delete[] name;

    
}