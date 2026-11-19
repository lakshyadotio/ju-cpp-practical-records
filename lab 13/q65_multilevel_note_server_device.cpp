// Question 64: Write a program to implement multilevel inheritance using the classes Note, Server, and Device.
#include <iostream>
#include <string>
using namespace std;

// Base class Device
class Device {
protected:
    string deviceId;
    string ipAddress;

public:
    Device(string id = "DEV-01", string ip = "192.168.1.1")
        : deviceId(id), ipAddress(ip) {}

    void showDevice() const {
        cout << "Device ID:  " << deviceId << endl;
        cout << "IP Address: " << ipAddress << endl;
    }
};

// Intermediate class Server derived from Device
class Server : public Device {
protected:
    string serverName;
    int port;

public:
    Server(string id, string ip, string sName, int p)
        : Device(id, ip), serverName(sName), port(p) {}

    void showServer() const {
        showDevice();
        cout << "Server:     " << serverName << endl;
        cout << "Port:       " << port << endl;
    }
};

// Most derived class Note derived from Server
class Note : public Server {
private:
    string noteTitle;
    string content;

public:
    Note(string id, string ip, string sName, int p, string title, string text)
        : Server(id, ip, sName, p), noteTitle(title), content(text) {}

    void displayNote() const {
        cout << "\n--- Synchronized Note Record ---" << endl;
        showServer();
        cout << "Note Title: " << noteTitle << endl;
        cout << "Content:    " << content << endl;
    }
};

int main() {
    Note myNote("DEV-994", "10.0.0.45", "JECRC-Cloud-Server", 8080, "Exam Syllabus", "C++ Practical Lab List Complete.");
    myNote.displayNote();
    return 0;
}
