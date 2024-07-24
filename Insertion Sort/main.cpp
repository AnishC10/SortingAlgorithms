#include <vector>
#include <iostream>

using std::vector;

vector<int> insertionSort(vector<int> & arr) {
    for (int i = 1; i < arr.size(); i++) {
        int j = i-1;
        int key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]> key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
    return arr;
}

#testing
int main() {
    vector<int> arr = {10, 3, 5, 6, 2, 7};
    insertionSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
