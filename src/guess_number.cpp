#include <iostream>
#include <random>
#include <chrono>

int main()
{
    std::default_random_engine engine(static_cast<unsigned int>(std::chrono::system_clock::now().time_since_epoch().count()));
    std::uniform_int_distribution<int> distribution(1, 1000);
    int random_number = distribution(engine);
    std::cout << "��Ʒ�۸������ɣ���ΧΪ[1,1000), ��²�۸�";
    int guess_number = -1;
    while (guess_number != random_number)
    {
        std::cin >> guess_number;
        if (guess_number > random_number)
        {
            std::cout << "�´��ˣ����������룺";
        }
        else if (guess_number < random_number)
        {
            std::cout << "��С�ˣ����������룺";
        }
        else
        {
            std::cout << "��ϲ�㣬�¶��ˣ�" << std::endl;
        }
    }
    return 0;
}