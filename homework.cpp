#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // Task 1
  std::vector<int> ints = {1, 2, 3, 4, 5};

  std::vector<double> doubles = {2.5, 3.5, -8.9, 10.2, 7.2};

  std::vector<std::string> names

      = {“Vu”, “Henderson”, “Tanara”, “Amy”, “Jilly”};
    
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}