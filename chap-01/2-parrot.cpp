#include <iostream>
#include <string>

int main()
{
    /*
    int number = 0;
    std::cin >> number;
    do
    {
        std::cout << "Craow " << number << " !" << std::endl;
        std::cin >> number;
    }
    while (number != -1);
    return 0;
    */

    /*
    int number = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cin >> number;
        if (number == -1)
            break;
        std::cout << "Craow " << number << " !" << std::endl;
    };
    */

    using namespace std;

    string word;
    for (int i = 0; i < 10; i++)
    {
        cin >> word;
        cout << "Craow " << word << " !" << endl;
    };
    return 0;
}
