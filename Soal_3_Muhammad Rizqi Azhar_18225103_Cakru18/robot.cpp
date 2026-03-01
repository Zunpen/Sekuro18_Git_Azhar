#include <iostream>
using namespace std;

class robot
{
private:
    int jarak;
    string status;

public:
    void inputSensor(int inputjarak) {
        jarak = inputjarak;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        }
        else {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: " << status << endl;
    }
};

int main() 
{
    robot robot;
    int input;

    while (true) {
        cout << "Masukkan jarak: ";
        cin >> input;

        if (input == 67) {
            cout << "Program dihentikan.\n";
            break;
        }
        else {
        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
        }
    }
    return 0;
};