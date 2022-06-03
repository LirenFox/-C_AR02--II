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
	//反向輸出
    for(int i=5; i>=1; i--)
        cout << arr[i] << ' ';
    cout << arr[0] << endl;
    return 0;
}

