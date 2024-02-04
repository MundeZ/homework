#include <iostream>
#include "Graph.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Graph gr;
    gr.addName("Олег");
    gr.addName("Никита");
    gr.addName("Настя");
    gr.addName("Ваня");
    gr.addName("Женя");
    gr.findFriend();
    cout << endl;
    gr.findWhoNotFriend();
    return 0;
}
