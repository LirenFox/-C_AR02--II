#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    for(int i=0; i<6; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    for(int i=5; i>=0; i--)
        cout << arr[i] << ' ';
    return 0;
}
