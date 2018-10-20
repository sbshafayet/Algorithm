

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> a, int value){
    int high = a.size()-1;
    int low = 0;

    while(low <= high){
        int mid = (low+high)/2;

        if(a[mid] > value){
            high = mid -1;
        }
        else if(a[mid] < value){
            low = mid + 1;
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main()
{

    int a[] = {1,20,44,53,62,88,500,1000};
    vector <int> v;

    for (int i=0; i < 8; i++){
        v.push_back(a[i]);
    }

    int x;
    while(1){
    cin >> x;
    cout << binarySearch(v, x) << endl;
    }
}






