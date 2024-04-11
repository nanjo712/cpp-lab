#include <iostream>
#include <random>
#include <chrono>

int main()
{
    std::default_random_engine engine(static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count()));
    std::uniform_int_distribution<int> distribution(1, 1000);
    int random_number = distribution(engine);
    std::cout << "商品价格已生成，范围为[1,1000), 请猜测价格：";
    int guess_number = -1;
    while (guess_number != random_number)
    {
        std::cin >> guess_number;
        if (guess_number > random_number)
        {
            std::cout << "猜大了，请重新输入：";
        }
        else if (guess_number < random_number)
        {
            std::cout << "猜小了，请重新输入：";
        }
        else
        {
            std::cout << "恭喜你，猜对了！" << std::endl;
        }
    }
    return 0;
}