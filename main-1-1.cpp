#include <iostream>
int add(int lhs, int rhs);

int main(){
    bool flag = false;

    if (add(1, 2) != 3) {
        std::cout << "Test 1 failed!" << std::endl; 
        flag = true;
    }

    if (add(-1, 2) != 1) {
        std::cout << "Test 2 failed!" << std::endl;
        flag = true;
    }

    if (add(18, 2) != 20) {
        std::cout << "Test 3 failed!" << std::endl;
        flag = true;
    }

    if (add(1, -2) != -1) {
        std::cout << "Test 4 failed!" << std::endl;
        flag = true;
    }

    if (add(11, 2) != 13) {
        std::cout << "Test 5 failed!" << std::endl;
        flag = true;
    }

    if (flag == false){
        std::cout << "All tests passed" << std::endl;
    }
    return 0;
}

int add(int lhs, int rhs) {
    return lhs + rhs;
}