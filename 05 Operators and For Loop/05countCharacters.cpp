// input = abc def 12$;

// Output: 6 2 2;
// 6 - char
// 2 - int
// 2 - SPACE/Newline/Enter

#include <iostream>
using namespace std;

int main()
{

    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    char input = cin.get();

    int digits = 0, spaces = 0, characters = 0;

    while (input != '$')
    {

        if (input >= 'a' and input <= 'z')
        {
            characters++;
        }
        else if (input >= '0' and input <= '9')
        {
            digits++;
        }
        else if (input == ' ' or input == '\n' or input == '\t')
        {
            spaces++;
        }
        input = cin.get();
    }

    cout << characters << " " << digits << " " << spaces << endl;
}