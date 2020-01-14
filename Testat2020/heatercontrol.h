#ifndef HEATERCONTROL_H
#define HEATERCONTROL_H

#include <QObject>
#include <QList>
#include "room.h"

class HeaterControl : public QObject
{
    Q_OBJECT

    Q_PROPERTY(float totalPowerDemand READ totalPowerDemand);

    QList<Room> m_roomlist;
    float m_totalPowerDemand=0;

public:
    HeaterControl(){
        m_totalPowerDemand=0;
    }
    bool add(Room* room){

        if(m_roomlist.contains(*room)){
            return false;
        }else{
            m_roomlist.append(*room);
            connect(room, &Room::powerChanged,this, &HeaterControl::setPowerChanged);
            return true;
        }
    } //add to list and connect signal with slot

    float totalPowerDemand(){
        for( auto i=m_roomlist.begin(); i != m_roomlist.end(); ++i){
            m_totalPowerDemand += i->powerdemand();
        }
        return m_totalPowerDemand;
    }

public slots:
    void setPowerChanged(float power){
        totalPowerDemand();
    }

};

#endif // HEATERCONTROL_H
