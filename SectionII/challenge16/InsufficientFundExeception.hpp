#ifndef INSUFFICIENTFUNDEXECEPTION_HPP
#define INSUFFICIENTFUNDEXECEPTION_HPP

class InsufficientFundExeception: public std::exception
{
public:
    InsufficientFundExeception() noexcept = default;
    ~InsufficientFundExeception() = default;
    virtual const char *what() const noexcept{
        return "Insufficient funds exception.";
    }

};

#endif // INSUFFICIENTFUNDEXECEPTION_HPP
