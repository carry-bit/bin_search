#include <iostream>

using namespace std;

int bin_search(int sorted_list[], int search_item, int init_index = 0, int end_index = 4);

int main() {
    
    int temp {};
    int s_list[5] {};
    int search_num {};
    
    for (int i=0; i<5; ++i) {
        cout << "Enter number (" << i+1 << ") : ";
        cin >> temp;
        s_list[i] = temp;
    }
    
    cout << "\nWhat number are you searching? ";
    cin >> search_num;
    
    cout << bin_search(s_list, search_num);
    
    return 0;
}


int bin_search(int sorted_list[], int search_item, int init_index, int end_index) {
    // check item is last item!
    if (init_index == end_index)
        return sorted_list[init_index];
    
    // find middle item
    int middle_index {(end_index - init_index) / 2};
    int middle_item {sorted_list[middle_index]};
    
    // check bigger or smaller than middle_item
    if (middle_item == search_item) {
        
        return middle_item;
        
    } else if (middle_item > search_item) {
        
        return bin_search(sorted_list, search_item, init_index, middle_index);
        
    } else {
        
        return bin_search(sorted_list, search_item, middle_index, end_index);
        
    }
}
