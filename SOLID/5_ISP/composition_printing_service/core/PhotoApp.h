#ifndef photoApp_h
#define photoApp_h

class PhotoPrintingService {
public:
    virtual void printHighDpiColoredImage() = 0;
};

class PhotoApp
{
public:
    void print(PhotoPrintingService* service);
};

#endif