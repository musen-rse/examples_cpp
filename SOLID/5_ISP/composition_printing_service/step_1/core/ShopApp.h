#ifndef shopApp_h
#define shopApp_h

class ShopPrintingService {
public:
    virtual void printReceipt() = 0;
    virtual void printHighDpiColoredImage() = 0;
};


class ShopApp
{
public:
    void print(ShopPrintingService* service);
};

#endif
