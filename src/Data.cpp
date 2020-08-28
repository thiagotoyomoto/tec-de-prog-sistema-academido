#include "Data.hpp"
#include <chrono>    // chrono já inclui a "ctime"
#include <iomanip>
#include <iostream>

namespace Data
{
    std::tuple<int, int, int> obterAtual()
    {
        std::chrono::time_point<std::chrono::system_clock> sc_now =
            std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(sc_now);

        std::tm* local = std::localtime(&time);

        return std::make_tuple(local->tm_mday, local->tm_mon + 1,
                               local->tm_year + 1900);
    }

    void imprimirFormatada(const int& dia, const int& mes, const int& ano)
    {
        if(dia > 0 && mes > 0 && ano >= 0)
        {
            std::cout << "Data atual: " << std::setw(2) << std::setfill('0')
                      << dia << '/' << std::setw(2) << std::setfill('0') << mes
                      << '/' << std::setw(4) << std::setfill('0') << ano << '\n'
                      << '\n';
        }
    }
}    // namespace Data