//if (_kbhit()) // ����Ƿ��а���������,inutil
//if (_getch() == 'j') // ����Ƿ����˼����ϵ� 'j' ��,inutil
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <stdlib.h>

#pragma comment(lib, "winmm.lib")

using namespace std;

//����̫��
void playMusic()
{
    cout << "Playing music..." << endl;

    mciSendString(L"play music/jt.mp3", 0, 0, 0); // ѭ�����������ļ�
}
//ֻ��zhin
void playMusi()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ji.mp3", 0, 0, 0); // ѭ�����������ļ�
}
//��
void playMus()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ni.mp3", 0, 0, 0); // ѭ�����������ļ�
}
//̫
void playMu()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/ta.mp3", 0, 0, 0); // ѭ�����������ļ�
}
//��
void playM()
{
    cout << "Playing music..." << endl;
    mciSendString(L"play music/me.mp3", 0, 0, 0); // ѭ�����������ļ�
}

int main()
{

    bool jKeyPressed = false; // �Ƿ���j��
    bool ctrlKeyPressed = false; // �Ƿ���Ctrl��
    bool nKeyPressed = false;
    bool tKeyPressed = false;
    bool mKeyPressed = false;


    while (true)
    {

        //1
        if (GetAsyncKeyState('J') & 0x8000) // ���j���Ƿ񱻰���
        {
            if (!jKeyPressed) // ����ǵ�һ�ΰ���j��
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
        if (GetAsyncKeyState('N') & 0x8000) // ���j���Ƿ񱻰���
        {
            if (!nKeyPressed) // ����ǵ�һ�ΰ���j��
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

        if (GetAsyncKeyState('T') & 0x8000) // ���j���Ƿ񱻰���
        {
            if (!tKeyPressed) // ����ǵ�һ�ΰ���j��
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

        if (GetAsyncKeyState('M') & 0x8000) // ���j���Ƿ񱻰���
        {
            if (!mKeyPressed) // ����ǵ�һ�ΰ���j��
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
        if (GetAsyncKeyState(VK_CONTROL) & 0x8000) // ���Ctrl���Ƿ񱻰���
        {
            if (!ctrlKeyPressed) // ����ǵ�һ�ΰ���Ctrl��
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
//Beep(523, 500); // ����һ��Ƶ��Ϊ523Hz������������500����,inutil