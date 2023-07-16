#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template < >
    struct Traits < Fruit>
    {
        public: static
        const char *name(int index)
        {
            Fruit f = (Fruit) index;
            switch (f)
            {
                case Fruit::apple:
                    return "apple";
                case Fruit::orange:
                    return "orange";
                case Fruit::pear:
                    return "pear";
            }

            return "unknown";
        }
    };

template < >
    struct Traits < Color>
    {
        public: static
        const char *name(int index)
        {
            Color c = (Color) index;
            switch (c)
            {
                case Color::red:
                    return "red";
                case Color::green:
                    return "green";
                case Color::orange:
                    return "orange";
            }

            return "unknown";
        }
    };
// Define specializations for the Traits class template here.


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
