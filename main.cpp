#include <ranges>
#include <iostream>
#include <vector>

int main()
{
    auto v = std::vector<unsigned>();
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (unsigned int & r : std::ranges::reverse_view(v))
    {
        std::cout << r;
    }
}
