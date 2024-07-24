#include <vector>
#include <iostream>

using std::vector;
vector <int> selectionSort(vector<int> & arr) {
    int min;
    int temp;
    for (int i = 0; i < arr.size() - 1; i++) {
        min = i;
        for (int j = i+1; j< arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        std::swap(arr[i], arr[min]);
    }
    return arr;
}

#testing
int main() {
    vector<int> arr = {10, 3, 5, 6, 2, 7};
    selectionSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
