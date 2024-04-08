//
// Created by zero on 24. 4. 8.
//
#include "BaseStationManager.h"

BaseStationManager::BaseStationManager() : activeBaseStationId(-1) {}

void BaseStationManager::addBaseStation(int componentId) {
    baseStations.insert(componentId);
}

void BaseStationManager::removeBaseStation(int componentId) {
    baseStations.erase(componentId);
}

void BaseStationManager::setActiveBaseStation(int componentId) {
    activeBaseStationId = componentId;
}

int BaseStationManager::getActiveBaseStation() const {
    return activeBaseStationId;
}

void BaseStationManager::printBaseStations() const {
    for (int id : baseStations) {
        std::cout << "Base Station ID: " << id;
        if (id == activeBaseStationId) std::cout << " (Active)";
        std::cout << std::endl;
    }
}

void BaseStationManager::printActiveBaseStations() const {
    for (int id : baseStations) {
        std::cout << "Base Station ID: " << id;
        if (id == activeBaseStationId) std::cout << " (Active)";
        std::cout << std::endl;
    }
}
