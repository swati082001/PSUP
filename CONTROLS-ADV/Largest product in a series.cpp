#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int getProduct(vector<int>& arr) {
    int prdt = 1;
    for (int i = 0; i < arr.size(); i++) {
        prdt *= arr[i];
    }
    return prdt;
}

int main() {
    int n;
    long long series;
    cin >> n >> series;
    string seriesStr = to_string(series);

    vector<int> seriesArr;
    for (char digit : seriesStr) {
        int num = digit - '0';
        seriesArr.push_back(num);
    }

    int maxPrdt = 0;

    for (int i = 0; i < seriesArr.size(); i++) {
        vector<int> arr;
        for (int j = i; j < seriesArr.size(); j++) {
            arr.push_back(seriesArr[j]);
            if (arr.size() == n) {
                int prdt = getProduct(arr);
                if (prdt > maxPrdt) {
                    maxPrdt = prdt;
                }
            }
        }
    }

    cout << maxPrdt << endl;

    return 0;
}
