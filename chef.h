#ifndef CHEF_H
#define CHEF_H
#include <string>

class chef {
protected:
    std::string name;

public:
    chef(const std::string &n);
    void makeSalad();
    void makeSoup();
    ~chef();
};

class italianChef : public chef {
public:
    italianChef(const std::string &n);
    std::string getName();
    void makePasta();
    ~italianChef();
};


#endif // CHEF_H
