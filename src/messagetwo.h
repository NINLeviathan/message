#ifndef MESSAGE_TWO_H_
#define MESSAGE_TWO_H_

#include <iostream>

class MessageTwo
{
private:
    const std::string m_theMessage = "Hello message two";

public:
    MessageTwo()  = default;
    ~MessageTwo() = default;

    std::string TheMessage();
};

#endif // MESSAGE_TWO_H_