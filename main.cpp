#include "song.hpp"
#include "album.hpp"
#include "musician.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string bname;
    cout << "Введите название группы: ";
    getline(cin, bname);
    rock_group group(bname);
    
    int n;
    cout << "Введите количество участников: ";
    cin >> n;
    cin.get();
    vector <musician> artists;
    for (int i = 0; i < n; i++)
    {
        string bname;
        string binsrument;
        cout << "Введите имя " << i+1 << " участника: \n";
        getline(cin, bname);
        cout << "Введите инструмент " << i + 1 << " участника: \n";
        getline(cin, binsrument);
        musician artist(group, bname, binsrument);
        artists.push_back(artist);
    }
    
    cout << "Введите количество альбомов: ";
    cin >> n;
    cin.get();
    vector <album> albums;
    for (int i = 0; i < n; i++)
    {
        string bname;
        int byear;
        cout << "Введите название " << i + 1 << " альбома: \n";
        getline(cin, bname);
        cout << "Введите год выпуска " << i + 1 << " альбома: \n";
        cin >> byear;
        cin.get();
        album album(group, bname, byear);
        albums.push_back(album);
    }
    
    cout << "Введите количество песен: ";
    cin >> n;
    cin.get();
    vector <song> songs;
    for (int i = 0; i < n; i++)
    {
        string bname;
        double btime;
        int byear;
        cout << "Введите название " << i + 1 << " песни: \n";
        getline(cin, bname);
        cout << "Введите продолжительность " << i + 1 << " песни: \n";
        cin >> btime;
        cin.get();
        cout << "Введите год выпуска " << i + 1 << " песни: \n";
        cin >> byear;
        cin.get();
        song asong(group, bname, btime, byear);
        songs.push_back(asong);
    }
    
    for (int i = 0; i < artists.size(); i++)
    {
        cout << artists[i] << '\n';
    }
    
    for (int i = 0; i < albums.size(); i++)
    {
        cout << albums[i] << '\n';
    }
    
    for (int i = 0; i < songs.size(); i++)
    {
        cout << songs[i] << '\n';
    }
}
