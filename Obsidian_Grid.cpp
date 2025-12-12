#include <iostream>

void print_3x3_array(std::string array[3][3], int size){
    std::cout << "***************************\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < sizeof(array[0])/sizeof(array[0][0]); j++){
            std::cout << "Element: " << array[i][j] << "; Address: " << &array[i][j] << '\n'; 
        }
    }
    std::cout << "***************************\n";
}

void attempt_swap(std::string x, std::string y){
    std::string temp;
    temp = x;
    x = y;
    y = temp; 
}

void execute_swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp; 
}

void scan_box(const std::string item){
    //item = "HACKED";
    std::cout << "Scanning Contents: " << item << "...Secure.\n";
}

void print_element(const std::string &item, int m, int n){
    std::cout << "The item is: " << item << "; it's location in the 3x3 array is (" << m << ", " << n << ")\n";
}

int main(){

    // --- Part 1 ---
    std::string lockboxes[3][3] = {{"Gold", "Bear", "Carrot"},
                                   {"Car", "Red", "Friend"},
                                   {"Phone", "School", "Snow"}};
    int size = sizeof(lockboxes)/sizeof(lockboxes[0]);

    print_3x3_array(lockboxes, size);

    // --- Part 2 ---
    attempt_swap(lockboxes[2][1], lockboxes[0][2]);
    print_3x3_array(lockboxes, size);

    execute_swap(lockboxes[2][1], lockboxes[0][2]);
    print_3x3_array(lockboxes, size);

    // --- Part 3 ---
    scan_box("Hello");

    // --- Final Part ---
    std::cout << "***************************\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < sizeof(lockboxes[0])/sizeof(lockboxes[0][0]); j++){
            print_element(lockboxes[i][j], i, j); 
        }
    }
    std::cout << "***************************\n";

    return 0;
}