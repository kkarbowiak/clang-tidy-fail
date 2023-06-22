#include <vector>
#include <iostream>

int main()
{
    auto v = std::vector<unsigned>();
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (auto r = v.rbegin(); r != v.rend(); ++r)
    {
        std::cout << *r;
    }
}
