#include <vector>
#include <iostream>

using std::vector;
vector <int> bubbleSort(vector <int> & arr) {
    for (int i = 0; i< arr.size(); i++) {
        bool swap = false;
        for (int j = 0; j < arr.size()-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swap = true;
            }
        }
        if (swap == false) { //only will execute if algorithm went through whole array without swap
            break;
        }
    }
    return arr;
}
int main() {
    vector<int> arr = {10, 3, 5, 6, 2, 7};
    bubbleSort(arr);
    for(int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}
