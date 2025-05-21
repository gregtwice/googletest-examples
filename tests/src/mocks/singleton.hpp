#ifndef MOCK_SINGLETON_HPP
#define MOCK_SINGLETON_HPP

#include <gmock/gmock.h>

namespace mocks
{
    class MySingleton
    {
    public:
        static MySingleton *getInstance()
        {
            static MySingleton instance{};
            return &instance;
        }

        // MOCK_METHOD(MySingleton *, construct, ());
        MOCK_METHOD(bool ,do_work,());

    private:
        MySingleton() {};
    };

} // namespace mocks
#endif // MOCK_SINGLETON_HPP