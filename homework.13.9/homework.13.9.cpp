#include <iostream>
#include "Graph.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    Graph gr;
    gr.addName("����");
    gr.addName("������");
    gr.addName("�����");
    gr.addName("����");
    gr.addName("����");
    gr.findFriend();
    cout << endl;
    gr.findWhoNotFriend();
    return 0;
}
