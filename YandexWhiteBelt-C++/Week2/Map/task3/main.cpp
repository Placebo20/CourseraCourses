#include <iostream>
#include <vector>
#include <string>
#include <map>

void PrintBusAndStops(const std::map<std::string, std::vector<std::string>>& buses){
	if(buses.size() != 0){
		for(auto [bus, stops] : buses){
			std::cout << bus << ": ";
			for(int i = 0; i < stops.size(); i++){
				std::cout << stops[i] << " ";
			}
		}
		std::cout << std::endl;
	} else {
		std::cout << "No buses" << std::endl;
	}
}

int main () {
	int countOfCommands = 0;
	std::cout << "Enter count of commands: ";
	std::cin >> countOfCommands;

	std::string command;

	std::map<std::string, std::vector<std::string>> buses;

	for(int i = 0; i < countOfCommands; i++){
		std::cin >> command;
		if(command == "NEW_BUS"){
			std::string newBusName;
			int countOfStops = 0;
			std::vector<std::string> newBusStopsVector;
			std::cin >> newBusName;
			std::cin >> countOfStops;
			for(int i = 0; i < countOfStops; i++){
				std::string newStopName;
				std::cin >> newStopName;
				newBusStopsVector.push_back(newStopName);
			}
			buses[newBusName] = newBusStopsVector;
		} else if(command == "BUSES_FOR_STOP"){
			std::map<std::string, std::vector<std::string>> busesForStop;
			std::string stopName;
			std::cin >> stopName;
			for(const auto& [bus, stops] : buses){
				for(int i = 0; i < stops.size(); i++){
					if(stops[i] == stopName){
						busesForStop[bus] = stops;
					}
				}
			}
			PrintBusAndStops(busesForStop);
		} else if(command == "STOPS_FOR_BUS"){
			std::map<std::string, std::vector<std::string>> stopsForBus;
			std::string busName;
			std::cin >> busName;
			for(const auto& [bus, stops] : buses){
				if(bus != busName){
					for(int i = 0; i < stops.size(); i++){
						for(int j = 0; j < buses[busName].size(); j++){
							if(stops[i] == buses[busName][j]){
								stopsForBus[stops[i]].push_back(bus);
							}
						}
					}
				} else {continue;}
			}
			if(stopsForBus.size() != 0)
				PrintBusAndStops(stopsForBus);
			else
				std::cout << "No interchange" << std::endl;
		}
	}

	return 0;
}
