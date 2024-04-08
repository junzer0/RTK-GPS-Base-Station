//
// Created by zero on 24. 4. 8.
//

#ifndef PX4_BASESTATIONMANAGER_H
#define PX4_BASESTATIONMANAGER_H

#endif //PX4_BASESTATIONMANAGER_H

#pragma once

#include <set>
#include <iostream>

class BaseStationManager {
public:
    BaseStationManager();
    void addBaseStation(int componentId);
    void removeBaseStation(int componentId);
    void setActiveBaseStation(int componentId);
    int getActiveBaseStation() const;
    void printBaseStations() const;

private:
    std::set<int> baseStations; // 모든 Base Station의 컴포넌트 ID 저장
    int activeBaseStationId; // 활성화된 Base Station의 컴포넌트 ID
};
