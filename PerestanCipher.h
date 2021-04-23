#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class PerestanCipher
{
private:
    int k;
public:
    PerestanCipher()=delete;
    PerestanCipher(int w);
    wstring CoderPerestanCipher(PerestanCipher w, wstring& s);
    wstring DecoderPerestanCipher(PerestanCipher w, wstring& s);
};
