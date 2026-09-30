#include <iostream>
#include <string>
using namespace std;

class Camera
{
public:
    Camera(){}
    void takePhoto() { cout << "Taking photo..." << endl; }
};

class MusicPlayer
{
public:
    MusicPlayer(){}
    void playMusic() { cout << "Playing music..." << endl; }
};

class SmartWatch : public Camera, public MusicPlayer
{
};

int main()
{
    SmartWatch s1;
    s1.takePhoto();
    s1.playMusic();
    return 0;
}