#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    std::vector<string> v1{"Sub","2","3","4","5","6","7","8"};
    std::vector<string> v2{        "55",  "7",  "9","Sub"};
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
 
    std::vector<string> v_intersection;
 
    std::set_intersection(v1.begin(), v1.end(),
                          v2.begin(), v2.end(),
                          std::back_inserter(v_intersection));
    for(auto n : v_intersection)
        std::cout << n << ' ';
}
