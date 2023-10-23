// DnD.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//<DarK><Многофункциональная игра>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
void printVin() {
    cout << "==================" << endl;
    cout << "======Victory!=====" << endl;
    cout << "==================" << endl;
}
void printLose() {
    cout << "==================" << endl;
    cout << "~~~Defeat...~~~" << endl;
    cout << "==================" << endl;
}
class Arena {
protected:
    int attackPower;
public:
    void setAttackPower(int a) {
        attackPower = a;
    }
};
class Hero : public Arena {
public:
    void attack() {
        cout << "Hero Attack - " << attackPower << endl;
    }
};

class Enemy : public Arena {
public:
    void attack() {
        cout << "Enemy Attack - " << attackPower << endl;
    }
};
class BaseXaracted
{
public:
    BaseXaracted(int s, int z, int l, int i, int o, int lev, int mg, int ol, int def, int mon)
        :sila(s), zdorovie(z), lovcosti(l), intelect(i), opytnow(o), level(lev), magical(mg), opytlevel(ol), defend(def), moune(mon)
    {
    }
    void printDate()
    {
        cout << " Level: " << level << endl;
        cout << opytnow << "/" << opytlevel << endl;
        cout << "Force =" << sila << endl;
        cout << "Health: " << zdorovie << "HP" << endl;
        cout << "Dexterity = " << lovcosti << endl;
        cout << "Intelligence = " << intelect << endl;
        cout << "Magic Power = " << magical << endl;
        cout << "Protection = " << defend << endl;
        cout << moune << " Gold`s" << endl;
    }
private:
    int sila;
    int zdorovie;
    int lovcosti;
    int intelect;
    int opytnow;
    int level;
    int magical;
    int opytlevel;
    int defend;
    int moune;
};
class Player
{
public:
    Player(string n, string c, BaseXaracted b)
        : name(n),
        clas(c),
        bxd(b)
    {
    }
    void printInfo()
    {
        cout << name << endl;
        cout << "(" << clas << ")" << endl;
        cout << "---------------------" << endl;
        bxd.printDate();
        cout << "---------------------" << endl;
    }
private:
    string name;
    string clas;
    BaseXaracted bxd;
};

class myClass {
public:
    myClass(string nm) {
        setName(nm);
    }
    void setName(string x) {
        name = x;
    }
    string getName() {
        return name;
    }
private:
    string name;
};
int main() {
    Hero h;
    Enemy en;
    Arena* e1 = &h;
    Arena* e2 = &en;
    int sila = 150, zdorovie = 1500, lovcosti = 200, intelect = 500, opytnow = 0, level = 1, magical = 0, opytlevel = 100, defend = 100;
    int sila_e = 80, zdorovie_e = 1800, lovcosti_e = 250, intelect_e = 600, level_e = 1, magical_e = 0, defend_e = 150, moune = 500, zdorovie_n
        , zdorovie_en;
    string x, c;
    string Enemy_1, Enemy_2, Enemy_3;
    int y, r, f, cl, hit, cikl;
    int ht1, ht2, ht3, ht4, ht5, ht6, ht7, ht8, ht9, ht10, hl, enem1, enem2, enem3;
    string hit_1, hit_2, hit_3, hit_4, hit_5, hit_6, hit_7, hit_8, hit_9, hit_10, hill;
    cout << "Greetings to you! I am the guide of this game. Try not to touch or write anything now, I'll tell you everything now. You have entered an incredible world - a world called Trip. This world is full of dangers and it needs its own hero. Tell me, how can I address you?" << endl;
    cout << "The name of your hero:";
    cin >> x;
    myClass ob1(x);
    myClass ob2("The vile Orc");
    cout << "Choose the class of your hero:" << endl << "1)Warrior" << endl << "2)Archer" << endl << "3)Magician" << endl;
    cin >> cl;
    if (cl == 1)
    {
        c = "Warrior";
        sila += 50;
        zdorovie += 200;
        intelect += 50;
        lovcosti += 50;
        defend += 200;
        hit_1 = "Sword swing";
        hit_2 = "Red-hot metal";
        hit_3 = "Flying Blade";
        hit_4 = "Crossroad";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    if (cl == 2)
    {
        c = "Archer";
        sila += 30;
        zdorovie += 500;
        intelect += 30;
        lovcosti += 150;
        defend += 150;
        hit_1 = "Arrow";
        hit_2 = "Poison Arrow";
        hit_3 = "A queue of arrows";
        hit_4 = "Fire Arrow";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    if (cl == 3)
    {
        c = "Magician";
        sila += 35;
        zdorovie += 300;
        intelect += 100;
        magical += 200;
        defend += 180;
        hit_1 = "Electric pulse";
        hit_2 = "Poison Cloud";
        hit_3 = "Fire ball";
        hit_4 = "Meteor shower";
        hit_5 = "";
        hit_6 = "";
        hit_7 = "";
        hit_8 = "";
        hit_9 = "";
        hit_10 = "";
    }
    cout << "Good. Now, I'll show you your characteristics: " << endl;
    BaseXaracted bxd(sila, zdorovie, lovcosti, intelect, opytnow, level, magical, opytlevel, defend, moune);
    Player p(x, c, bxd);
    p.printInfo();
    cout << " Now you can act. I suggest you try yourself. Let's see your abilities in the arena." << endl;
    cout << "Defeat the Vile Orc!" << endl;
    cout << endl;
    cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
    cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
    zdorovie_n = zdorovie;
    zdorovie_en = zdorovie_e;
    while (zdorovie_e > 0)
    {
        hit = 0;
        r = rand() % sila_e;
        cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << hit_3 << endl;
        cin >> f;
        if (f == 1)
        {
            hit = 2 * sila;
            hit -= (lovcosti_e * 0.1);
            hit += (magical * 0.1);
        };
        if (f == 2)
        {
            hit = sila;
            hit += (intelect * 0.5);
            hit -= (lovcosti_e * 0.1);
            hit += (magical * 0.2);
        };
        if (f == 3)
        {
            hit = sila * 2;
            hit += (intelect * 0.5);
            hit += (magical * 0.5);
            hit -= defend_e;
        }
        zdorovie_e -= hit;
        zdorovie -= sila_e + r;
        e1->setAttackPower(hit);
        e2->setAttackPower(sila_e + r);
        h.attack();
        cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
        en.attack();
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << endl << endl;
        if (zdorovie <= 0) {
            zdorovie_e = 0;
        }
    }
    if (zdorovie <= 0) {
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << endl;
        opytnow += 10;
        moune += 50;
        printLose();
        cout << "I'm sorry, my young friend. The world won't forget you. You died like a great one " << ob1.getName() << "... " << endl;
    }
    else {
        cout << ob2.getName() << ":" << zdorovie_e << "HP" << endl;
        cout << endl;
        opytnow += 30;
        moune += 100;
        printVin();
        cout << "Congratulations, Oh Great " << ob1.getName() << "! You have completed the task. Now, your goal is to rid your Kingdom of the undead and suffering. Good luck!" << endl;
    }
    cout << endl << ob1.getName() << endl;
    cout << " Level: " << level << endl;
    cout << opytnow << "/" << opytlevel << endl;
    cout << moune << " Gold`s" << endl;
    cout << endl << endl;
    zdorovie = zdorovie_n;
    myClass ob3("The Forest Robber");
    zdorovie_e = zdorovie_en;
    while (level <= 10)
    {
        zdorovie_en = zdorovie_e;
        zdorovie_n = zdorovie;
        cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
        cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
        while (zdorovie_e > 0)
        {
            hit = 0;
            r = rand() % sila_e;
            cout << "1." << hit_1 << endl << "2." << hit_2 << endl << "3." << hit_3 << endl;
            cin >> f;
            if (f == 1)
            {
                hit = 2 * sila;
                hit -= (lovcosti_e * 0.1);
                hit += (magical * 0.1);
            };
            if (f == 2)
            {
                hit = sila;
                hit += (intelect * 0.5);
                hit -= (lovcosti_e * 0.1);
                hit += (magical * 0.2);
            };
            if (f == 3)
            {
                hit = sila * 2;
                hit += (intelect * 0.5);
                hit += (magical * 0.5);
                hit -= defend_e;
            }
            zdorovie_e -= hit;
            zdorovie -= sila_e + (r * (level * 1, 2));
            e1->setAttackPower(hit);
            e2->setAttackPower(sila_e + r);
            h.attack();
            for (int cikl = 0; cikl >= 10000; cikl++)
            {
            }
            cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
            en.attack();
            cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
            cout << endl << endl;
            if (zdorovie <= 0) {
                zdorovie_e = 0;
            }
        }
        if (zdorovie <= 0) {
            cout << ob1.getName() << ":" << zdorovie << "HP" << endl;
            cout << endl;
            opytnow += 10 * (level * 1.1);
            moune += 50 * (level * 1.1);
            printLose();
        }
        else {
            cout << ob3.getName() << ":" << zdorovie_e << "HP" << endl;
            cout << endl;
            opytnow += 30 * (level * 1.2);
            moune += 100 * (level * 1.1);
            printVin();
        }
        zdorovie = zdorovie_n;
        zdorovie_e = zdorovie_en;
        if (opytnow > opytlevel)
        {
            opytnow = opytlevel - opytnow;
            opytnow = opytnow - opytnow - opytnow;
            cout << "A new level!" << endl;
            opytlevel += (opytlevel * 1.2);
            level += 1;
            sila += (sila * 1.2);
            zdorovie += (zdorovie * 1.2);
            lovcosti += (lovcosti * 1.3);
            intelect += (intelect * 1.1);
            magical += (magical * 1.6);
            defend += (defend * 1.5);
            moune += 1000;
            sila_e += (sila_e * 1.4);
            zdorovie_e += (zdorovie_e * 1.3);
            BaseXaracted bxd(sila, zdorovie, lovcosti, intelect, opytnow, level, magical, opytlevel, defend, moune);
            Player p(x, c, bxd);
            p.printInfo();
        }
        else
        {
            cout << endl << ob1.getName() << endl;
            cout << " Level: " << level << endl;
            cout << opytnow << "/" << opytlevel << endl;
            cout << moune << " Gold`s" << endl;
            cout << endl << endl;
        }
    };
    cout << "working hours of the program :" << clock() / 1000000.0 << " seconds." << endl;
    cout << "Click return";
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
