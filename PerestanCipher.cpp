#include "PerestanCipher.h"
PerestanCipher::PerestanCipher(int key)
{
    this->k=key;
}
wstring PerestanCipher::CoderPerestanCipher(PerestanCipher w, wstring& s)
{
    wstring code;
    int h;
    if (s.size()%w.k!=0) {
        h=s.size()/w.k+1;
    } else {
        h=s.size()/w.k;
    }
    wchar_t a[h][w.k];
    int k=0;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w.k; j++) {
            if (k<s.size()) {
                a[i][j]=s[k];
                k++;
            } else a[i][j]=' ';
        }
    }
    for (int i=0; i<w.k; i++) {
        for (int j=0; j<h; j++) {
            code+=a[j][i];
        }
    }
    return code;
}
wstring PerestanCipher::DecoderPerestanCipher(PerestanCipher w, wstring& s)
{
    int h;
    if (s.size()%w.k!=0) {
        h=s.size()/w.k+1;
    } else {
        h=s.size()/w.k;
    }
    wchar_t a[h][w.k];
    int k=0;
    for (int i=0; i<w.k; i++) {
        for (int j=0; j<h; j++) {
            a[j][i]=s[k];
            k++;
        }
    }
    wstring decode;
    for (int i=0; i<h; i++) {
        for (int j=0; j<w.k; j++) {
            decode+=a[i][j];
        }
    }
    return decode;
}

