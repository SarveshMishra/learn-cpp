#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i : num)
    {
        cout << i << "\n";
    }
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return 0;
}