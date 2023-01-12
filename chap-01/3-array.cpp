#include <iostream>
#include <vector>

int main(int argc, char** argv)
{
    using namespace std;

    /*
    int size        = 50;
    int array[size] = {};
    for (int i = 0; i < size; i++)
    {
        array[i] = i + 1;
    }

    for (int n : array)
    {
        cout << n << endl;
    }
    */

    if (argc < 2)
    {
        cerr << "Missing required argument(s) !" << endl;
        return -1;
    }

    int array_size;
    sscanf(argv[1], "%d", &array_size);

    vector<int> array;
    for (int i = 0; i < array_size; i++)
    {
        array.emplace_back(i + 1);
    }

    for (int n : array)
    {
        cout << n << endl;
    }

    return 0;
}
