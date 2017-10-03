#define AIRPORTNET_H
#include "Graph.h"
#include <string>
using namespace std;
class AirportNet{
    public:
        AirportNet(const string aname);
        AirportNet(const AirportNet& aNet); // copy contructor
        ~AirportNet(); // destructor
        void listDirectFlights(const string aname);
        void listRoutesOnHubAirport(const string aname);
        void findConnectedComponents();
        void displayMostCentralAirport();
    private:
        Graph graph;
};
