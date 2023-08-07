#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
    int num;
    std::string tmp, list;
    std::vector<int> arr;
    std::getline(std::cin, tmp);
    std::istringstream iss(tmp);
    iss >> num;
    std::getline(std::cin, list);
    std::istringstream iss2(list);

    if (num >= 1 && num <= 100){
        int tmp2;
        while (iss2 >> tmp2) {
            if (tmp2 >= 1 && tmp2 <= 100)
                arr.push_back(tmp2);
            else
                return (1);
        }
        std::sort(arr.begin(), arr.end());
        for (int num : arr)
            std::cout << num << " ";
        std::cout << std::endl;
    }

}