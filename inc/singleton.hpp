#ifndef INC_SINGLETON_HPP
#define INC_SINGLETON_HPP

class MySingleton
{
private:
    /* data */
    MySingleton(){};

public:
    static MySingleton *getInstance();

    bool do_work();
};

#endif // INC_SINGLETON_HPP