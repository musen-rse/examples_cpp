#include "PhotoApp.h"

void PhotoApp::print(PrintingService* service) {
    service->printHighDpiColoredImage();
}
