#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector <std::vector<int>> table = {
        {1,2,3},
        {10,12,13}


    };
    int sum = 0;

    for(int i = 0; i < table.size(); i++){
        for(int j = 0; j < table[i].size(); ++j){
            sum += table[i][j];
        
        }
    }
    std::cout << "Sum of all elements in the list include: " << sum <<"\n";

return 0;
}
    