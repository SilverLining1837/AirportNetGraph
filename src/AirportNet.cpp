#include "AirportNet.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
AirportNet::AirportNet(const string aname){
    string a,b;
    int length;
    a = aname.substr(4, aname.find(" "));
    b = aname.substr(4+a.length, aname.find(" "));
    for(int i = 0; i < 43;i++){
        a = aname.substr(4, aname.find(" "));
        b = aname.substr(4+a.length, aname.find(" "));
        graph.insert(a);
        graph.insert(b);
         graph.findVertex(a)->addEdge(graph.findVertex(b),2);
    }


    graph.printGraph();
}
AirportNet::AirportNet(const AirportNet& aNet){

} // copy contructor
AirportNet::~AirportNet(){
} // destructor
void AirportNet::listDirectFlights(const string aname){
}
void AirportNet::listRoutesOnHubAirport(const string aname){
}
void AirportNet::findConnectedComponents(){
}
void AirportNet::displayMostCentralAirport(){
}

int main(){
   string aList = "43\nIstanbul Edremit 4\nIstanbul Samsun 7\nIstanbul Trabzon 9\nIstanbul Erzincan 10\nIstanbul Erzurum 12\nIstanbul Van 14\nIstanbul Mus 13\nIstanbul Sirnak 16\nIstanbul Batman 13\nIstanbul Elazig 12\nIstanbul Sivas 8\nIstanbul Mardin 14\nIstanbul Malatya 10\nIstanbul Diyarbakir 12\nIstanbul Kayseri 7\nIstanbul Ankara 6\nIstanbul Konya 6\nIstanbul Antalya 8\nIstanbul Izmir 6\nIstanbul Denizli 7\nIstanbul Nevsehir 8\nAnkara Trabzon 8\nAnkara Diyarbakir 8\nAnkara Bodrum 7\nAnkara Erzurum 9\nAnkara Antalya 5\nAnkara Adana 5\nIzmir Samsun 10\nIzmir Mardin 12\nIzmir Diyarbakir 10\nIzmir Elazig 9\nIzmir Malatya 8\nIzmir Hatay 7\nIzmir Adana 6\nIzmir Antalya 4\nAdana Van 8\nAdana Trabzon 10\nAdana Bodrum 7\nAdana Erzurum 9\nAdana Antalya 4\nAntalya Trabzon 11\nAntalya Malatya 8\nAntalya Diyarbakir 10";
    AirportNet a(aList);
}
