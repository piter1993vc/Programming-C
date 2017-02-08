#ifndef  DANE_H_
#define DANE_H_
#define MAX 30
 struct dane
{
    char imie[MAX];
    char nazwisko[MAX];

};
typedef struct dane daneos;
void wyswietl(const daneos *wsk);
void wprowadz(daneos *wsk);





#endif // DANE_H_
