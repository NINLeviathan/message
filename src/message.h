#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <iostream>

class Message
{
private:
    const std::string m_theMessage = "Hello message";

public:
    Message()  = default;
    ~Message() = default;

    std::string TheMessage();
};

#endif // MESSAGE_H_