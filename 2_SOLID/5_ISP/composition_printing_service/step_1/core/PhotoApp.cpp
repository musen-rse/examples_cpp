#include "PhotoApp.h"

void PhotoApp::print(PhotoPrintingService* service) {
    service->printHighDpiColoredImage();
}
