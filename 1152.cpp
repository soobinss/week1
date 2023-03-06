#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc , const char * argv[])
{
    int N;
    double sum = 0;
    cin >> N;

    double arr[1001];
    for(int i; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);
