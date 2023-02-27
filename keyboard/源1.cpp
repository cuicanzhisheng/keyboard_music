//if (_kbhit()) // 检测是否有按键被按下,inutil
//if (_getch() == 'j') // 检测是否按下了键盘上的 'j' 键,inutil
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <stdlib.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

//鸡你太美
void playMusic()
{
    cout << "Playing music..." << endl;

    mciSendString(L"play music/jt.mp3", 0, 0, 0); // 循环播放音乐文件
}
//只因zhin
void playMusi()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ji.mp3", 0, 0, 0); // 循环播放音乐文件
}
//你
void playMus()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ni.mp3", 0, 0, 0); // 循环播放音乐文件
}
//太
void playMu()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ta.mp3", 0, 0, 0); // 循环播放音乐文件
}
//美
void playM()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/me.mp3", 0, 0, 0); // 循环播放音乐文件
}

int main()
{

    bool jKeyPressed = false; // 是否按下j键
    bool ctrlKeyPressed = false; // 是否按下Ctrl键
    bool nKeyPressed = false;
    bool tKeyPressed = false;
    bool mKeyPressed = false;


    while (true)
    {

        //1
        if (GetAsyncKeyState('J') & 0x8000) // 检测j键是否被按下
        {
            if (!jKeyPressed) // 如果是第一次按下j键
            {
                playMusi();
                jKeyPressed = true;
            }
        }
        else
        {
            jKeyPressed = false;
        }
        //2
        if (GetAsyncKeyState('N') & 0x8000) // 检测j键是否被按下
        {
            if (!nKeyPressed) // 如果是第一次按下j键
            {
                playMus();
                nKeyPressed = true;
            }
        }
        else
        {
            nKeyPressed = false;
        }

        //3

        if (GetAsyncKeyState('T') & 0x8000) // 检测j键是否被按下
        {
            if (!tKeyPressed) // 如果是第一次按下j键
            {
                playMu();
                tKeyPressed = true;
            }
        }
        else
        {
            tKeyPressed = false;
        }

        //4

        if (GetAsyncKeyState('M') & 0x8000) // 检测j键是否被按下
        {
            if (!mKeyPressed) // 如果是第一次按下j键
            {
                playM();
                mKeyPressed = true;
            }
        }
        else
        {
            mKeyPressed = false;
        }

        //ctrl
        if (GetAsyncKeyState(VK_CONTROL) & 0x8000) // 检测Ctrl键是否被按下
        {
            if (!ctrlKeyPressed) // 如果是第一次按下Ctrl键
            {
                playMusic();
                ctrlKeyPressed = true;
            }
        }
        else
        {
            ctrlKeyPressed = false;
        }
    }
    return 0;
}
//Beep(523, 500); // 发出一声频率为523Hz的声音，持续500毫秒,inutil