//
// Created by remy on 07-06-20.
//
#include "QrToPng.h"

int main() {

    std::string qrText = getenv("STRING");
    std::string fileName = "out.png";

    int imgSize = std::atoi(getenv("IMGSIZE"));
    int minModulePixelSize = 3;
    auto exampleQrPng1 = QrToPng(fileName, imgSize, minModulePixelSize, qrText, true, qrcodegen::QrCode::Ecc::MEDIUM);

    std::cout << "Writing QR code to " << fileName << " with text: '" << qrText << "', size: " <<
              imgSize << "x" << imgSize << ", qr module pixel size: " << minModulePixelSize << ". " << std::endl;
    if (exampleQrPng1.writeToPNG())
        std::cout << "Success!" << std::endl;
    else
        std::cerr << "Failure..." << std::endl;
    return 0;
}
