#ifndef ROOM_H
#define ROOM_H

#include <QObject>

class Room : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged);
    Q_PROPERTY(float volume READ volume WRITE setVolume NOTIFY volumeChanged);
    Q_PROPERTY(bool active READ active WRITE setActive NOTIFY activeChanged);
    Q_PROPERTY(float temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged);
    Q_PROPERTY(float targetTemperature READ targetTemperature WRITE setTargetTemperature NOTIFY targetTemperatureChanged);

    QString m_name;
    float m_volume;
    bool m_active;
    float m_temperature;
    float m_targetTemperature;
    float m_powerdemand;

public:
    Room(){
        m_name="Unknown";
        m_volume=0;
        m_active=false;
        m_temperature=0;
        m_targetTemperature=20;
        m_powerdemand=calcPower();
    }

    QString name(){
        return m_name;
    }

    float volume(){
        return m_volume;
    }

    bool active(){
        return m_active;
    }

    float temperature(){
        return m_temperature;
    }

    float targetTemperature(){
        return m_targetTemperature;
    }

    float powerdemand(){
        return m_powerdemand;
    }

    float calcPower(){
        return (volume()*(abs(targetTemperature() - temperature()))*16.0f);
    };

signals:
    void powerChanged(float power);
    void nameChanged(QString name);
    void volumeChanged(float volume);
    void activeChanged(bool active);
    void temperatureChanged(float temperature);
    void targetTemperatureChanged(float targetTemperature);

public slots:
    void setName(QString name){
        name=name.toLower();
        name[0]=name[0].toUpper();
//        name=name.toUpper();
        if(name.length() > 20){
            name=name.mid(0,20);
        }else if(name.length() < 3){
            name = "Unknown";
        }
        if(m_name != name){
            m_name=name;
            emit nameChanged(name);
        }
    }

    void setVolume(float volume){
        if(volume < 0){
            volume = 0;
        }
        else if(volume > 5000){
            volume =5000;
        }
        if(m_volume != volume){
            m_volume = volume;
            m_powerdemand=calcPower();
            emit volumeChanged(volume);
            emit powerChanged(powerdemand());
        }
    }

    void setActive(bool active){
        if(m_active != active){
            m_active=active;
            if(m_active==0){
                m_powerdemand=0;
                emit powerChanged(0);
            }
            emit activeChanged(active);
            m_powerdemand=calcPower();
            emit powerChanged(powerdemand());
        }
    }

    void setTemperature(float temperature){
        if(temperature > 70){
            temperature = 70;
        }
        if(m_temperature != temperature){
            m_temperature = temperature;
            m_powerdemand=calcPower();
            emit temperatureChanged(temperature);
            emit powerChanged(powerdemand());
        }
    }

    void setTargetTemperature(float targetTemperature){
        if(targetTemperature < 0){
            targetTemperature = 0;
        }
        else if(targetTemperature > 70){
            targetTemperature=70;
        }
        if(m_targetTemperature != targetTemperature){
            m_targetTemperature=targetTemperature;
            m_powerdemand = calcPower();
            emit targetTemperatureChanged(targetTemperature);
            emit powerChanged(powerdemand());
        }
    }

};




#endif // ROOM_H
