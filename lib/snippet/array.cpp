#include<iostream>
#include<array>
using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};

    int first_element = array[0];
    int array_size = sizeof(array) / sizeof(array[0]);
    
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    int first_std_element = arr.at(0);
    // サイズはメモリのバイト数
    size_t size = arr.size();
    

    return 0;
}
