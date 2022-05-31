#ifndef printing_service_h
#define printing_service_h

#include <iostream>


class PrintingService
{
public:
    void printColoredLetter() {
        std::cout << "colored printing" << std::endl;
    }

    void printBlackAndWhiteLetter() {
        std::cout << "black and white printing" << std::endl;
    }

    void printHighDpiColoredImage() {
        std::cout << "high dpi colored image" << std::endl;
    }

    void printLowDpiBlackAndWhiteImage() {
        std::cout << "low dpi black and white image" << std::endl;
    }

    void printReceipt() {
        std::cout << "receipt" << std::endl;
    }
};


#endif
