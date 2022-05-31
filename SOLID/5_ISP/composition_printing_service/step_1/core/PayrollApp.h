#ifndef payrollApp_h
#define payrollApp_h

class PayrollPrintingService {
public:
    virtual void printBlackAndWhiteLetter() = 0;
};


class PayrollApp
{
public:
    void print(PayrollPrintingService* service);
};

#endif