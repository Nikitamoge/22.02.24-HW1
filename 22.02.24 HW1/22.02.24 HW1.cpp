#include <iostream>
#include <string>

using namespace std;

class Processor {
public:
    string model = "Ryzen 5900hx";
    void output() {
        cout << "Processor: " << model << endl;
    }
};

class RAM {
public:
    int size = 32;
    void output() {
        cout << "RAM: " << size << "GB" << endl;
    }
};

class Mouse {
public:
    string type = "Wireless";
    void output() {
        cout << "Mouse: " << type << endl;
    }
};

class Webcam {
public:
    int resolution = 1440;
    void output() {
        cout << "Webcam: " << resolution << "p" << endl;
    }
};

class Printer {
public:
    string brand = "Samsung";
    void output() {
        cout << "Printer: " << brand << endl;
    }
};

class GraphicsCard {
public:
    string model = "RTX 3080";
    void output() {
        cout << "Graphics Card: " << model << endl;
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    Mouse* mouse;
    Webcam* webcam;
    Printer* printer;
    GraphicsCard graphicsCard;
public:
    Laptop(Mouse* m, Webcam* w, Printer* p) : mouse(m), webcam(w), printer(p) {}

    void output() {
        processor.output();
        ram.output();
        mouse->output();
        webcam->output();
        printer->output();
        graphicsCard.output();
    }
};

int main() {
    Mouse myMouse;
    Webcam myWebcam;
    Printer myPrinter;
    Laptop myLaptop(&myMouse, &myWebcam, &myPrinter);
    myLaptop.output();
}
