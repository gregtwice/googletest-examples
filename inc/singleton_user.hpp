#ifndef INC_SINGLETON_USER
#define INC_SINGLETON_USER

template <class SingletonLike>
class SingletonUser
{
public:
    SingletonUser():instance(SingletonLike::getInstance()){

    };

    bool work(){return instance->do_work();}

private:
    SingletonLike * instance;
};

#endif /* INC_SINGLETON_USER */
