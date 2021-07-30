#include <CppLinuxSerial/SerialPort.hpp>

using namespace mn::CppLinuxSerial;

int main() {
  // Create serial port object and open serial port
  SerialPort serialPort("/dev/ttyUSB0", BaudRate::B_9600);
  serialPort.SetTimeout(-1); // Block when reading until any data is received
  serialPort.Open();

  // Write some ASCII datae
  // serialPort0.Write("Hello");

  // Read some data back
  while (1) {
    std::string readData;
    serialPort.Read(readData);
    std::cout << readData;
  }

  // Close the serial port
  serialPort.Close();
}
