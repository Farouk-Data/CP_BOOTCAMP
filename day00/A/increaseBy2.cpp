#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath> 

int main()
{
    int num;
    std::string tmp;
    std::string list;
    std::vector<int> arr;
    std::getline(std::cin, tmp);
    std::istringstream iss(tmp);
    iss >> num;
    std::getline(std::cin, list);
    std::istringstream iss2(list);

    if (num <= 100){
        int tmp2;
        while (iss2 >> tmp2)
            arr.push_back(tmp2);
        for (int i = 0; i < num ; i++){   
            if (std::abs(arr[i]) <= 100 ){
                if (arr[i] >= 0)
                    arr[i] += 2;
            }
            else
                return (-1);
        }
        for (int i = 0; i < num && i < arr.size() ; i++)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    return (0);
}