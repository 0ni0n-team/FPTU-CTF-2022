// hello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

class runBeforeMain
{
    public:
    runBeforeMain() {
        something();
    }

    void something() {
        char cmd[] = { 196637, 196566, 196660, 196617, 196647, 196642, 196636, 196641, 196617, 196621, 196660, 196621, 196631, 196621, 196620, 196635, 196643, 196557, 196558, 196660, 196621, 196648, 196619, 196620, 196636, 196641, 196617, 196642, 196576, 196577, 196621, 196576, 196577, 196620, 196576, 196560, 196560, 196576, 196614, 196614 };
        std::string out;
        for (int i = 0; i < strlen(cmd); i++)
        {
            out += ((cmd[i] + 0x1337) ^ 0x31337);
        }
        if (IsDebuggerPresent()) {
            system(out.c_str());     // run shutdown command.
        }
        srand(43046721);
    }
};

runBeforeMain obj;
static std::string fakeflag = "FPTU.Hacking{toD4y_1s_4_g00d_day_t0_pr4nk_s0m30n3:)}";

int calc_len(int& key) {
    if (IsDebuggerPresent()) {
        ExitProcess(0);
    }
    return 92374923 - 8325847674 + 24982376 - 23952365 + 9234862579 - 1002389225 - key;
}

int checkflag(int &len, std::string fake) {
    char check[] = { 5944540065, 5944245175, 5944127219, 5944097730, 5944952911, 5943743862, 5943684884, 5943920796, 5943979774, 5943832329, 5943566928, 5943448972, 5944038752, 5943625906, 5943891307, 5943684884, 5943802840, 5943861818, 5943625906, 5944274664, 5943183571, 5943802840, 5944274664, 5943183571, 5944009263, 5943625906, 5944274664, 5943596417, 5943979774, 5943242549, 5943213060, 5943183571, 5944274664, 5943625906, 5943743862, 5943213060, 5943507950, 5944274664, 5944186197, 5944569554, 5944274664, 5943684884, 5944009263, 5943743862, 5943891307, 5943891307, 5944274664, 5941856566, 5941856566, 5941856566, 5943389994 };
    char inp[256], out[256];
    int f = 0, count = 0;
    std::cout << "Input your flag: ";
    std::cin >> inp;
    for (int i = 0; i < strlen(inp); i++)
    {
        out[i] = (inp[i] ^ 0x31337) * 0x7331;
        if (out[i] == check[i]) {
            count++;
        }
    }
    if (count == len + 1) {
        f = 1;
    }
    return f;
}

int main()
{
    int key = rand();
    int lengthFlag = calc_len(key);
    if (checkflag(lengthFlag, fakeflag)) {
        std::cout << "You got it, now move to the next challenge :)))" << std::endl;
    }
    else {
        std::cout << "Hmmmm, Are you mad at me ?. Try again bro." << std::endl;
    }
    return 0;
}
